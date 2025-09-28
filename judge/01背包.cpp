#include<bits/stdc++.h>
using namespace std;
int jl[110][1010];
int w[110],v[110];
int n,t;
int dfs(int x,int z)
{
	if(x<0||z<=0)
		return 0;
	if(jl[x][z]!=-1)
		return jl[x][z];
	int ret=dfs(x-1,z);
	if(w[x]<=z)
	{
		ret=max(ret,v[x]+dfs(x-1,z-w[x]));
	}
	jl[x][z]=ret;
	return ret;
}
int main()
{
	memset(jl,-1,sizeof(jl));
	cin>>n>>t;
	for(int i=0;i<t;i++)
	{
		cin>>w[i]>>v[i];
	}
	cout<<dfs(t-1,n);
	return 0;
}
