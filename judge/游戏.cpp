#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int jl[200003];
int n,a,b,c;
int dfs(int x)
{
	if(x<=c)
	{
		return 1;
	}
	if(jl[x]!=0)
	{
		return jl[x];
	}
	int ret=(dfs(x-a)+dfs(x-b))%mod;
	return jl[x]=ret; 
}
signed main()
{
	scanf("%d%d%d%d",&n,&a,&b,&c);
	cout<<dfs(n);
	return 0;
}
