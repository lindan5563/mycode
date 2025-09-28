#include<bits/stdc++.h>
using namespace std;
long long jl[21][4001];
int v[25];
int n,m;
long long dfs(int i,int x)
{
	if(x==0)
	{
		return 1;
	}
	if(i==n||x<0)
	{
		return 0;
	}
	if(jl[i][x]!=-1)
	{
		return jl[i][x];
	}
	long long ret=0;
	for(int j=0;v[i]*j<=x;j++)
	{
		ret=ret+dfs(i+1,x-v[i]*j);
	}
	jl[i][x]=ret;
	return ret;
}
int main()
{
	memset(jl,-1,sizeof(jl));
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	cout<<dfs(0,m);
	return 0;
}
