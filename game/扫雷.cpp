//¡ö¡ù 
#include<windows.h>
#include<cstdlib>
#include <iostream>
//#include <chrono>
//#include <thread>
#include <stdio.h>
#include <time.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
POINT p;
char ditu_2D[10][10];
char fan[10][10];
int x[10][10];//12 50 18/2=6
int y[10][10];//30 49
int suiji;
int lei=0;
char mmmmmm;
int main()
{
	cout<<"ÇëÎñ±ØÈ«ÆÁ£¡£¡£¡";
	cin>>mmmmmm;
	system("cls");
	srand(time(0));
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			suiji=rand()%10;
			if(suiji==5)
			{
				ditu_2D[i][j]='¡ù';
				lei++;
			}
			else
				ditu_2D[i][j]='¡ö';
			
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(fan[i][j]==0)
				cout<<"¡ö";
			cout<<" ";
		}
		cout<<endl;
	}
	for(;;)
	{
		if(KEY_DOWN(MOUSE_MOVED))
		{
			GetCursorPos(&p);
			cout<<p.x<<" "<<p.y<<endl;
			//Sleep(50);//std::this_thread::sleep_for(std::chrono::milliseconds(100));//ºÁÃë
		}
		
		
	}
	return 0;
}

