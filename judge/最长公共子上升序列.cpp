#include<bits/stdc++.h>
using namespace std;
long long jl[510][510][2147483647];
long long a[510],b[510];
long long ans[510];
int n,m;
long long dfs(int i,int j,long long bf)
{
	if(jl[i][j][bf]!=0)
	{
		return jl[i][j][bf];
	}
	if(i==n||j==m)
	{
		return jl[i][j][bf]=0;
	}
	long long ret=0;
	if(a[i]==b[j]&&a[i]>bf)
	{
		ret=dfs(i+1,j+1,a[i])+1;
	}
	ret=max({ret,dfs(i+1,j,bf),dfs(i,j+1,bf)});
	jl[i][j][bf]=ret;
	return ret;
}
void rtb(int i,int j,int cn)
{
	if(i==n||j==m)
	{
		return;
	}
	if(a[i]==b[j]&&jl[i][j]==jl[i+1][j+1]+1)
	{
		ans[cn]=a[i];
		rtb(i+1,j+1,cn+1);
		return;
	}
	else if(jl[i][j]==jl[i][j+1])
	{
		rtb(i,j+1,cn);
		return;
	}
	else
	{
		rtb(i+1,j,cn);
		return;
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",a+i);
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		scanf("%lld",b+i);
	}
	cout<<dfs(0,0,0)<<endl;
	rtb(0,0,0);
	for(int i=0;i<jl[0][0][0];i++)
	{
		printf("%lld ",ans[i]);
	}
	
//	cerr<<endl;
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			cerr<<jl[i][j]<<" ";
//		}
//		cerr<<endl;
//	}
	return 0;
}
