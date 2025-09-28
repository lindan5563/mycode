#include<bits/stdc++.h>
using namespace std;
bool use[25];
int a[25][25];
int n,ans=INT_MAX;
void dfs(int x,int c)
{
	if(x>n)
	{
		ans=min(ans,c);
		return;
	}
	if(ans<=c)
	{
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(use[i]==0)
		{
			use[i]=1;
			dfs(x+1,c+a[x][i]);
			use[i]=0;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	dfs(1,0);
	cout<<ans;
	return 0;
}
