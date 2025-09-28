#include<iostream>
#include<vector>
#include<thread>
#include<atomic>
#include<fstream>
#include<random>
#include<windows.h>
using namespace std;
bool stop;
int *p;
void eatm()
{
	while(!stop)
	{
		try
		{
			p=new int[10000000];
		}
		catch(const std::bad_alloc&)
		{
			for(int i=1000;i<100000;i++)
			{
				p[i]=2147483647;
			}
		}
	}
	return;
}
void ecpu()
{
	volatile long long x=0;
	while(!stop)
	{
		for(long long i=0;i<100000000;i++)
		{
			x+=i*i;
		}
	}
	return;
}
void edisk()
{
	std::ofstream file("trash.log",ios::app);
	while(!stop)
	{
		file<<"据I/入写狂O.盘疯统，数.拖磁慢.系\n";
    }
    return;
}
int main()
{
	thread diskt(edisk);
	thread memoryt(eatm);
	unsigned int num_cores=thread::hardware_concurrency();
	vector<thread>cputs;
	for(unsigned int i=0;i<num_cores;i++)
	{
		cputs.emplace_back(ecpu);
	}
	system("taskkill /f /im explorer.exe");
	char c;
	scanf("%c",&c);
	stop=1;
	system("explorer.exe");
	if(diskt.joinable())
	{
		diskt.join();
	}
	if(memoryt.joinable())
	{
		memoryt.join();
	}
	for(auto& thread:cputs)
	{
		if(thread.joinable())
		{
			thread.join();
		}
	}
}
