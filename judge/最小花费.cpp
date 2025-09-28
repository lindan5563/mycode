#include<bits/stdc++.h>
using namespace std; 
int gp[2002][2002];
int n,m;
int main()
{
	cin>>n>>m;
	int x,y,z;
	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d",&x,&y,&z);
		gp[x][y]=z;
	}
	vector<bool>final(n+1,true);
	vector<int>dist(n+1,INT_MAX-1);
	dist[1]=0;
	for(int i=1;i<=n-1;i++)
	{
		x=-1,y=INT_MAX;
		for(int j=1;j<=n;j++)
		{
			if(final[j]==true&&dist[j]<y)
			{
				x=j;
				y=dist[i];
			}
		}
		if(x==-1)
		{
			break;
		}
		for(int j=0;j<n;j++)
		{
			if(gp[x][j]!=0&&dist[j]>dist[x]+gp[x][j])
			{
				dist[j]=dist[x]+gp[x][j];
			}
		}
		final[x]=false;
	}
	printf("%.10lf",(dist.back()*0.01));
	return 0;
}
