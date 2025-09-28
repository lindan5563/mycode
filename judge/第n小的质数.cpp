#include<bits/stdc++.h>
using namespace std;
int n,cnt;
bool p(int x)
{
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	cin>>n;
	for(int i=2;;i++)
	{
		if(p(i))
			cnt++;
		if(cnt==n)
		{
			cout<<i;
			return 0; 
		}
	}
	return 0;
}
