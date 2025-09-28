#include<bits/stdc++.h>
using namespace std;
int pfs(int c)
{
	for(int i=2;i<c/2+1;i++)
	{
		if(i*i==c)
			return i;
	}
	return c;
}
int main()
{
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<n/2;i++)
	{
		for(int j=i+1;j<n/3;j++)
		{
			int e=i*i+j*j;
			int k=pfs(e);
			if(k!=e&&i+j>k&&i+k>j&&k+j>i)
			{
//				cout<<i<<" "<<j<<" "<<k<<" y"<<endl;
				cnt++;
			}
			/*
			else
				cout<<i<<" "<<j<<" "<<k<<" n"<<endl;
			*/
		}
	}
	cout<<cnt<<endl;
}
