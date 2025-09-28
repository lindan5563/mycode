#include<bits/stdc++.h>
using namespace std;
int a[18];
void dfs(int n)
{
	if(n==1)
	{
		cout<<"2(0)";
		return;
	}
	else if(n==2)
	{
		cout<<"2+";
		return;
	}
	while(n!=0)
	{
		int e,l=0,r=15;
		while(l<r)
		{
			int mid=(l+r+1)/2;
		    if(a[mid]<n)
			{
				l=mid;
			}
			else
			{
				r=mid-1;
			}
		}
		e=a[l];
		cout<<"2(";
		dfs(e);
		if(n-e==0)
		{
			cout<<")";
		}
		else
		{
			cout<<")+";
		}
		n-=e;
	}
}
int main()
{
	int n;
	cin>>n;
	a[0]=1;
	for(int i=1;i<=15;i++)
	{
		a[i]=a[i-1]*2;
	}
	dfs(n);
	return 0;
}
