#include<bits/stdc++.h>
using namespace std;
int jl[1000][1000];
int mp[1000][1000];
int n;
int dp(int x,int y)
{
	if(x==n-1)
		return mp[x][y];
	if(jl[x][y]!=-1)
		return jl[x][y];
	jl[x][y]=mp[x][y]+max(dp(x+1,y),dp(x+1,y+1));
	return jl[x][y];
}
int main()
{
	memset(jl,-1,sizeof(jl));
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cin>>mp[i][j];
		}
	}
	cout<<dp(0,0);
	return 0;
}
