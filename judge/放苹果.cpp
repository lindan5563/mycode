#include<bits/stdc++.h>
using namespace std;
int cnt,t,m,n;
void dfs(int c,int e,int he)
{
	if(c==0&&he==m)
	{
		cnt++;
		return;
	}
	if(c<0||he>m)
	{
		return;
	}
	for(int i=e;i<=m;i++)
	{
		dfs(c-1,i,he+i);
	}
}
int main()
{
	cin>>t;
	while(t--)
	{
		scanf("%d%d",&m,&n);
		dfs(n,0,0);
		printf("%d\n",cnt);
		cnt=0;
	}
	return 0;
}
