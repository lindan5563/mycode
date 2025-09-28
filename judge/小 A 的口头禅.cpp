#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
char str[1010][1010];
int n,m,ans=0;
void dfs(int x,int y)
{
	string a;
	if(n-x+1>=4)
	{
		for(int i=0;i<4;i++)
			a+=str[x+i][y];
		if(a=="hehe"||a=="eheh")
			ans++;
	}
	a="";
	if(m-y+1>=4)
	{
		for(int i=0;i<4;i++)
			a+=str[x][y+i];
		if(a=="hehe"||a=="eheh")
			ans++;
	}
}

int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%s",str[i]+1);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			dfs(i,j);
	printf("%d",ans);
	return 0;
}
