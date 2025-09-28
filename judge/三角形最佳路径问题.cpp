#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	cin>>n;
	vector<vector<int>>a(n,vector<int>(n,0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=n-2;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
		{
			a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
		}
	}
	cout<<a[0][0];
	return 0;
}
