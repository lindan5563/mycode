#include<bits/stdc++.h>
using namespace std;
int jl[11][16];
int lr[11][16];
int ans[11];
int n,m;
int dfs(int i,int v)
{
	if(jl[i][v]!=-1)
	{
		return jl[i][v];
	}
	if(i==n||v==0)
	{
		return jl[i][v]=0;
	}
	int ret=dfs(i+1,v);
	for(int j=1;j<=v;j++)
	{
		ret=max(ret,dfs(i+1,v-j)+lr[i][j]);
	}
	return jl[i][v]=ret;
}
void btk(int i,int v)
{
	if(i==n)
	{
		return;
	}
	for(int j=0;j<=v;j++)
	{
		if(jl[i][v]==jl[i+1][v-j]+lr[i][j])
		{
			ans[i]=j;
			btk(i+1,v-j);
			break;
		}
	}
}
int main()
{
	memset(jl,-1,sizeof(jl));
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&lr[i][j]);
		}
	}
	dfs(0,m);
	btk(0,m);
	cout<<jl[0][m]<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<" "<<ans[i]<<endl;
	}
//	for(int i=0;i<=n;i++)
//	{
//		for(int j=0;j<=m;j++)
//		{
//			printf("%3d",jl[i][j]);
//		}
//		printf("\n");
//	}
	return 0;
}
