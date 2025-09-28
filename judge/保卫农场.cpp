#include<bits/stdc++.h>
using namespace std;
int a[105][75];
int n,m,cnt;
void dfs(int x,int y)
{
	if(x<1||x>n||y<1||y>m||a[x][y]==0)
	{
		return;
	}
	a[x][y]=0;
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x+1,y);
	dfs(x,y-1);
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]>=a[i-1][j-1]&&
			   a[i][j]>=a[i-1][j]&&
			   a[i][j]>=a[i-1][j+1]&&
			   a[i][j]>=a[i][j-1]&&
			   a[i][j]>=a[i][j+1]&&
			   a[i][j]>=a[i+1][j-1]&&
			   a[i][j]>=a[i+1][j]&&
			   a[i][j]>=a[i+1][j+1])
			{
				dfs(i,j);
				cnt++;
				cout<<i<<" "<<j<<endl;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}
