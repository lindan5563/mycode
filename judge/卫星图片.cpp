#include<bits/stdc++.h>
using namespace std;
char a[80][80];
int n,m,cow,room;
void dfs(int x,int y)
{
	if(x<1||x>n||y<1||y>m||a[x][y]=='.')
	{
		return;
	}
	a[x][y]='.';
	dfs(x+1,y);
	dfs(x,y+1);
	dfs(x-1,y);
	dfs(x,y-1);
	return;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%s",a[i]+1);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]=='.')
			{
				if(a[i-1][j]=='#'&&a[i][j+1]=='#'&&a[i-1][j+1]=='#')
				{
					cow++;
					dfs(i,j+1);
					goto a;
				}
				if(a[i][j+1]=='#'&&a[i+1][j]=='#'&&a[i+1][j+1]=='#')
				{
					cow++;
					dfs(i,j+1);
					goto a;
				}
				if(a[i+1][j]=='#'&&a[i][j-1]=='#'&&a[i+1][j-1]=='#')
				{
					cow++;
					dfs(i+1,j);
					goto a;
				}
				if(a[i][j-1]=='#'&&a[i-1][j]=='#'&&a[i-1][j-1]=='#')
				{
					cow++;
					dfs(i,j-1);
					goto a;
				}
			}
			a:;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]=='#')
			{
				dfs(i,j);
				room++;
			}
		}
	}
	cout<<room<<endl<<cow;
	return 0;
}
