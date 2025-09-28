#include<bits/stdc++.h>
using namespace std;
struct node
{
	int id;
	int cnt;
	int link[2000];
};
bool vis[105];
int ans[105];
node a[100];
int n,m;
void dfs(int x,int step)
{
	if(x==1&&step==n+1)
	{
		for(int i=0;i<=n;i++)
		{
			printf("%d ",ans[i]);
		}
		exit(0);
	}
	for(int i=0;i<a[x].cnt;i++)
	{
		if(vis[a[x].link[i]]==0)
		{
			ans[step]=a[x].link[i];
//			vis[a[x].link[i]]=0;
			dfs(a[x].link[i],step+1);
//			vis[a[x].link[i]]=1;
		}
	}
}
int main()
{
	cin>>n>>m;
	int x,y;
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&x,&y);
		a[y].link[a[y].cnt]=x;
		a[y].cnt++;
	}
	ans[0]=1;
	dfs(1,1);
	return 0;
}
