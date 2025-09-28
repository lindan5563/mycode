#include<bits/stdc++.h>
#include<windows.h>
#include<thread>
void sn()
{
	Sleep(10000);
	system("shutdown -p");
}
using namespace std;
int main()
{
	system("color 2");
	thread a(sn);
	while(1)
	{
		for(int i=0;i<=100;i++)
		{
			{
				cout<<rand()%2<<"\a ";
			}
		}
	}
	return 0;
}
