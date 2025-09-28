#include<bits/stdc++.h>
using namespace std;
int day[]={0,31,0,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int y,m;
	cin>>y>>m;
	if(m==2)
	{
		if((y%4==0&&y%100!=0)||y%400==0)
			day[2]=29;
		else
			day[2]=28;
	}
	else
		cout<<day[m];
	return 0;
}
