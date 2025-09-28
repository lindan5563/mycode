#include<bits/stdc++.h>
using namespace std;
int w[110],v[110];
bool p[110];
int n,t,sum;
int dfs(vector<vector<int>>&jl,int x,int j)
{
	int ret=j;
	if(jl[x][j]!=0)
		return jl[x][j];
	for(int i=0;i<t;i++)
	{
		if(p[i]==0&&x+w[i]<=n)
		{
			p[i]=1;
			ret=max(ret,dfs(jl,x+w[i],j+v[i]));
			p[i]=0;
		}
	}
	return jl[x][j]=ret;
}
int main()
{
//	freopen("beibao1.in","r",stdin);
//	freopen("beibao1.out","w",stdout);
	cin>>n>>t;
	for(int i=0;i<t;i++)
	{
		scanf("%d%d",w+i,v+i);
		sum+=v[i];
	}
	vector<vector<int>>jl(n+1,vector<int>(sum,0));
	cout<<dfs(jl,0,0);
	return 0;
}
