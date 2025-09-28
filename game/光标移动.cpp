#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {2, 2};
    SetConsoleCursorPosition(hConsole, pos);
    std::cout << "Hello" << std::endl;
	return 0;
}

