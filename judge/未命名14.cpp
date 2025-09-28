#include <iostream>
#include <vector>
#include <thread>
#include <atomic>
#include <fstream>
#include <windows.h>
#include <shellapi.h>

using namespace std;

// ȫ�ֱ���
#define WM_TRAYICON (WM_USER + 1)
#define ID_TRAY_EXIT 1000
#define ID_TRAY_TOGGLE 1001

NOTIFYICONDATA nid;
HWND hwnd;
std::atomic<bool> stop(false);
bool running = true;

// CPUѹ������
void cpu_stress() {
    volatile int x = 0;
    while (!stop) {
        for (int i = 0; i < 1000000; i++) {
            x += i * i;
        }
    }
}

// ����ѹ������
void disk_stress() {
    std::ofstream file("trash.log", std::ios::app);
    while (!stop) {
        file << "���д��������ݣ�����ϵͳ I/O...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}

// �ڴ�ѹ������
void memory_stress() {
    std::vector<std::vector<int>> memory_hog;
    const int chunk_size = 1000000;
    try {
        for (int i = 0; i < 1500 && !stop; i++) {
            memory_hog.emplace_back(chunk_size);
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    } catch (const std::bad_alloc&) {
        // �ڴ�ľ�����
    }
}

// ������Ϣ����
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_TRAYICON: {
            if (lParam == WM_RBUTTONUP) {
                // �Ҽ��˵�
                POINT pt;
                GetCursorPos(&pt);

                HMENU hMenu = CreatePopupMenu();
                AppendMenu(hMenu, MF_STRING, ID_TRAY_TOGGLE, stop ? _T("��ʼѹ������") : _T("ֹͣѹ������"));
                AppendMenu(hMenu, MF_STRING, ID_TRAY_EXIT, _T("�˳�����"));

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

// ��ʼ�����ش���
void InitHiddenWindow() {
    WNDCLASSEX wc = { 0 };
    wc.cbSize = sizeof(WNDCLASSEX);
    wc.lpfnWndProc = WndProc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = _T("StressTrayApp");

    RegisterClassEx(&wc);

    hwnd = CreateWindowEx(
        0, wc.lpszClassName, _T("ѹ�����Գ���"),
        0, 0, 0, 0, 0, NULL, NULL, GetModuleHandle(NULL), NULL
    );

    ShowWindow(hwnd, SW_HIDE);
}

// �������ͼ��
void AddTrayIcon() {
    nid = { 0 };
    nid.cbSize = sizeof(NOTIFYICONDATA);
    nid.hWnd = hwnd;
    nid.uID = 1;
    nid.uFlags = NIF_ICON | NIF_MESSAGE | NIF_TIP;
    nid.uCallbackMessage = WM_TRAYICON;
    nid.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    strcpy_s(nid.szTip, "ѹ�����Գ���");

    Shell_NotifyIcon(NIM_ADD, &nid);
}

// ������
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    InitHiddenWindow();
    AddTrayIcon();

    // ����ѹ�������߳�
    unsigned int num_cores = std::thread::hardware_concurrency();
    std::vector<std::thread> cpu_threads;
    for (unsigned int i = 0; i < num_cores; i++) {
        cpu_threads.emplace_back(cpu_stress);
    }
    std::thread disk_thread(disk_stress);
    std::thread memory_thread(memory_stress);

    // ����Ϣѭ��
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    // ����
    stop = true;
    for (auto& thread : cpu_threads) {
        if (thread.joinable()) thread.join();
    }
    if (disk_thread.joinable()) disk_thread.join();
    if (memory_thread.joinable()) memory_thread.join();

    return 0;
}
