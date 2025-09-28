#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x,t;
};
node fy[102][102];
int n,ox,oy;
int NEW(int x,int y)
{
	int ret=INT_MAX;
	if(fy[x+1][y].t+1<n*2-1&&fy[x+1][y].x<ret)
	{
		ret=fy[x+1][y].x;
		ox=x+1;
		oy=y;
	}
	if(fy[x][y+1].t+1<n*2-1&&fy[x][y+1].x<ret)
	{
		ret=fy[x][y+1].x;
		ox=x;
		oy=y+1;
	}
	if(fy[x-1][y].t+1<n*2-1&&fy[x-1][y].x<ret)
	{
		ret=fy[x-1][y].x;
		ox=x-1;
		oy=y;
	}
	if(fy[x][y-1].t+1<n*2-1&&fy[x][y-1].x<ret)
	{
		ret=fy[x][y-1].x;
		ox=x;
		oy=y-1;
	}
	return ret;
}
int main()
{
	memset(fy,INT_MAX,sizeof(fy));
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&fy[i][j].x);
		}
	}
	fy[1][1].t=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i!=1||j!=1)
			{
				fy[i][j].x=fy[i][j].x+NEW(i,j);
				fy[i][j].t=fy[ox][oy].t+1;
			}
		}
	}
	cout<<fy[n][n].x<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%3d",fy[i][j].x);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%3d",fy[i][j].t);
		}
		printf("\n");
	}
	return 0;
}
