#include <iostream>
#include <vector>
#include <thread>
#include <atomic>
#include <fstream>
#include <windows.h>
#include <shellapi.h>

using namespace std;

// 全局变量
#define WM_TRAYICON (WM_USER + 1)
#define ID_TRAY_EXIT 1000
#define ID_TRAY_TOGGLE 1001

NOTIFYICONDATA nid;
HWND hwnd;
std::atomic<bool> stop(false);
bool running = true;

// CPU压力测试
void cpu_stress() {
    volatile int x = 0;
    while (!stop) {
        for (int i = 0; i < 1000000; i++) {
            x += i * i;
        }
    }
}

// 磁盘压力测试
void disk_stress() {
    std::ofstream file("trash.log", std::ios::app);
    while (!stop) {
        file << "疯狂写入磁盘数据，拖慢系统 I/O...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}

// 内存压力测试
void memory_stress() {
    std::vector<std::vector<int>> memory_hog;
    const int chunk_size = 1000000;
    try {
        for (int i = 0; i < 1500 && !stop; i++) {
            memory_hog.emplace_back(chunk_size);
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    } catch (const std::bad_alloc&) {
        // 内存耗尽处理
    }
}

// 窗口消息处理
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_TRAYICON: {
            if (lParam == WM_RBUTTONUP) {
                // 右键菜单
                POINT pt;
                GetCursorPos(&pt);

                HMENU hMenu = CreatePopupMenu();
                AppendMenu(hMenu, MF_STRING, ID_TRAY_TOGGLE, stop ? _T("开始压力测试") : _T("停止压力测试"));
                AppendMenu(hMenu, MF_STRING, ID_TRAY_EXIT, _T("退出程序"));

                SetForegroundWindow(hwnd);
                TrackPopupMenu(hMenu, TPM_BOTTOMALIGN | TPM_LEFTALIGN, pt.x, pt.y, 0, hwnd, NULL);
                DestroyMenu(hMenu);
            }
            break;
        }
        case WM_COMMAND: {
            switch (LOWORD(wParam)) {
                case ID_TRAY_EXIT:
                    stop = true;
                    Shell_NotifyIcon(NIM_DELETE, &nid);
                    PostQuitMessage(0);
                    break;
                case ID_TRAY_TOGGLE:
                    stop = !stop;
                    break;
            }
            break;
        }
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}

// 初始化隐藏窗口
void InitHiddenWindow() {
    WNDCLASSEX wc = { 0 };
    wc.cbSize = sizeof(WNDCLASSEX);
    wc.lpfnWndProc = WndProc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = _T("StressTrayApp");

    RegisterClassEx(&wc);

    hwnd = CreateWindowEx(
        0, wc.lpszClassName, _T("压力测试程序"),
        0, 0, 0, 0, 0, NULL, NULL, GetModuleHandle(NULL), NULL
    );

    ShowWindow(hwnd, SW_HIDE);
}

// 添加托盘图标
void AddTrayIcon() {
    nid = { 0 };
    nid.cbSize = sizeof(NOTIFYICONDATA);
    nid.hWnd = hwnd;
    nid.uID = 1;
    nid.uFlags = NIF_ICON | NIF_MESSAGE | NIF_TIP;
    nid.uCallbackMessage = WM_TRAYICON;
    nid.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    strcpy_s(nid.szTip, "压力测试程序");

    Shell_NotifyIcon(NIM_ADD, &nid);
}

// 主函数
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    InitHiddenWindow();
    AddTrayIcon();

    // 启动压力测试线程
    unsigned int num_cores = std::thread::hardware_concurrency();
    std::vector<std::thread> cpu_threads;
    for (unsigned int i = 0; i < num_cores; i++) {
        cpu_threads.emplace_back(cpu_stress);
    }
    std::thread disk_thread(disk_stress);
    std::thread memory_thread(memory_stress);

    // 主消息循环
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    // 清理
    stop = true;
    for (auto& thread : cpu_threads) {
        if (thread.joinable()) thread.join();
    }
    if (disk_thread.joinable()) disk_thread.join();
    if (memory_thread.joinable()) memory_thread.join();

    return 0;
}
