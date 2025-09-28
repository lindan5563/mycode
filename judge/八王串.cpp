#include<bits/stdc++.h>
using namespace std;
bool a[10][10];
int cnt;
char whc[100][8];
bool check(int x,int y)
{
	for(int i=0;i<8;i++)
	{
		if(a[x][i]==1)
			return false;
		if(a[i][y]==1)
			return false;
		for(int j=0;j<8;j++)
		{
			if(a[i][j]==1&&i-j==x-y)
				return 0;
			if(a[i][j]==1&&i+j==x+y)
				return 0;
		}
	}
	return true;

}
void dfs(int u)
{
	if(u==8)
	{
		cnt++;
		for(int i=0;i<8;i++)
		{
			whc[cnt][i]=whc[cnt-1][i];
		}
		return;
	}
	for(int i=0;i<8;i++)
	{
		if(check(u,i))
		{
			whc[cnt][u]=i+'1';
			a[u][i]=1;
			dfs(u+1);
			a[u][i]=0;
		}
	}

}
int main()
{
	dfs(0);
	int t,e;
	cin>>t;
	while(t--)
	{
		scanf("%d",&e);
		for(int i=0;i<8;i++)
		{
			printf("%c",whc[e-1][i]);
		}
		printf("\n");
	}
	return 0;
}
