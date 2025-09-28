#include<bits/stdc++.h>
using namespace std;
bool p(int x)
{
	if(x<2)
		return 0;
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}
bool hw(int x)
{
	int e=x,f=0;
	while(e>0)
	{
		f=f*10+e%10;
		e/=10;
	}
	return f==x;
}
int main()
{
	int n,m,cnt=0;
	cin>>n>>m;
	for(;n<=m;n++)
	{
		if(hw(n)&&p(n))
		{
			printf("%d ",n);
			cnt++;
		}
		if(cnt==10)
		{
			printf("\n");
			cnt=0;
		}
	}
	return 0;
}
