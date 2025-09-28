#include<bits/stdc++.h>
using namespace std;
int w[110],v[110],p[110];
int jl[110][1010];
int n,t;
int dfs(int x,int z)
{
	if(x<0||z<=0)
		return 0;
	if(jl[x][z]!=-1)
		return jl[x][z];
	int ret=dfs(x-1,z);
	for(int i=1;w[x]*i<=z&&i<=p[x];i++)
	{
		ret=max(ret,v[x]*i+dfs(x-1,z-w[x]*i));
	}
	jl[x][z]=ret;
	return ret;
}
int main()
{
	memset(jl,-1,sizeof(jl));
//	freopen("beibao2.in","r",stdin);
//	freopen("beibao2.out","w",stdout);
	cin>>t>>n;
	for(int i=0;i<t;i++)
	{
		cin>>w[i]>>v[i]>>p[i];
		if(p[i]==-1)
			p[i]=1;
		else if(p[i]==0)
			p[i]=INT_MAX;
	}
	cout<<dfs(t-1,n);
	return 0;
}
