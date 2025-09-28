#include<bits/stdc++.h>
#define long long int int
using namespace std;
map<int,map<int,int>>jl;
int xyd[70],zyd[70],zf[70];
int n,k;
int dfs(int i,int m)
{
	if(i==k||m==0)
	{
		return 0;
	}
	if(jl[i][m]!=0)
	{
		return jl[i][m];
	}
	int ret=dfs(i+1,m);
	if(m-xyd[i]>=0)
	{
		
		ret=max(ret,xyd[i]*zyd[i]+dfs(i+1,m-xyd[i]));
	}
	jl[i][m]=ret;
	return ret;
}
signed main()
{
	cin>>n>>k;
	for(int i=0;i<k;i++)
	{
		cin>>xyd[i]>>zyd[i]>>zf[i];
	}
	cout<<dfs(0,n);
	return 0;
}
