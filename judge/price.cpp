#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	double my;
	cin>>n>>m;
	if(n>10&&n<50)
	{
		my=m*n*0.9;
	}
	else if(n>50&&n<100)
	{
		my=m*n*0.8;
	}
	else if(n>100)
	{
		my=m*n*0.7;
	}
	else
	{
		my=m*n;
	}
	printf("%.2f",my);
}
