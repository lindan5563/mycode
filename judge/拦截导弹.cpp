#include<bits/stdc++.h>
using namespace std;
int a[10000];
int b[10000];
int n;
int main()
{
	for(;cin>>a[n];n++){}
	for(int i=n-1;i>=0;i--)
	{
		int best=0;
		for(int j=i+1;j<n;j++)
		{
			if(b[j]>best&&a[j]<a[i])
				best=b[j];
		}
		b[i]=best+1;
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(ans<b[i])
			ans=b[i];
	}
	cout<<ans;
	return 0;
}
