#include<bits/stdc++.h>
using namespace std;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int hi[100][100];
int jl[100][100];
int n,m;
int dfs(int x,int y)
{
	if(jl[x][y]!=0)
	{
		return jl[x][y];
	}
	int ret=1;
	for(int i=0;i<4;i++)
	{
		int xx=x+dx[i];
		int yy=y+dy[i];
		if(xx>=0&&yy>=0&&xx<n&&yy<m&&hi[x][y]>hi[xx][yy])
		{
			ret=max(ret,1+dfs(xx,yy));
		}
	}
	jl[x][y]=ret;
	return ret;
	
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&hi[i][j]);
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			ans=max(ans,dfs(i,j));
		}
	}
	cout<<ans;
	return 0;
}
