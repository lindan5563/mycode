#include<bits/stdc++.h>
using namespace std;
int jl[110][1010];
int w[110]={35,30,60,50,40,10,25};
int v[110]={10,40,30,50,35,40,30};
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
	n=150,t=7;
	cout<<dfs(t-1,n);
	return 0;
}
