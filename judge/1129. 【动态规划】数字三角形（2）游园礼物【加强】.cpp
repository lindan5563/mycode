#include<bits/stdc++.h>
using namespace std;
int ta[1000][1000];
int jl[1000][1000];
int n,d;
int dfs(int x,int y)
{
	if(x==n)
		return ta[x][y];
	if(jl[x][y]!=0)
		return jl[x][y];
	return jl[x][y]=ta[x][y]+max(dfs(x+1,y),dfs(x+1,y+1));
}
void del(int x,int y)
{
	if(x<1||y>x)
		return;
	if(jl[x][y]!=0)
	{
		jl[x][y]=0;
		del(x-1,y);
		del(x-1,y+1);
	}
}
int main()
{
//	freopen("num.in","r",stdin);
//	freopen("num.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			scanf("%d",&ta[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			ta[i][j]*=2;
			del(i,j);
			d=max(d,dfs(1,1));
			ta[i][j]/=2;
		}
	}
	cout<<d;
	return 0;
}
