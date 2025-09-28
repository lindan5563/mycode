#include<bits/stdc++.h>
using namespace std;
double gp[101][101];
int pos[101][2];
int n,m,s,t;
int main()
{
	for(int i=1;i<=100;i++)
	{
		for(int j=1;j<=100;j++)
		{
			gp[i][j]=(i==j)?0:1e5;
		}
	}
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&pos[i][0],&pos[i][1]); 
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		double dx=pos[x][0]-pos[y][0];
		double dy=pos[x][1]-pos[y][1];
		gp[x][y]=gp[y][x]=sqrt(dx*dx+dy*dy);
	}
	cin>>s>>t;
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(gp[i][j]>gp[i][k]+gp[k][j])
				{
					gp[i][j]=gp[i][k]+gp[k][j];
				}
			}
		}
	}
	printf("%.2lf",gp[s][t]);
	return 0;
}
