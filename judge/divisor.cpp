#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,sj[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>sj[i];
	}
	for(int i=0;i<n-1;i++)
	{
		int e=__gcd(sj[i],sj[i+1]);
		if(e<x)
			x=e;
	}
	cout<<x;
}

