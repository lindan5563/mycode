#include<bits/stdc++.h>
#define unsignde long long int int
using namespace std;
bool a[101][101];
int dp[101][101];
int n,m;
signed main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	dp[1][1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]==0&&(i>1||j>1))
			{
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
	}
	cout<<dp[n][m];
	return 0;
}
