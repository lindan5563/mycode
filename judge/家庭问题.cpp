#include<bits/stdc++.h>
using namespace std;
bool a[1001][1001];
bool vis[1001];
int n,k,cnt,ans,e;
void dfs(int x)
{
	cnt++;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0&&a[x][i]==1)
		{
			vis[i]=1;
			dfs(i);
		}
	}
}
int main()
{
	cin>>n>>k;
	for(int i=0;i<k;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		a[x][y]=1;
		a[y][x]=1;
	}
	int e=0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			cnt=0;
			vis[i]=1;
			dfs(i);
			ans++;
			e=max(e,cnt);
		}
	}
	cout<<ans<<" "<<e;
	return 0;
}
