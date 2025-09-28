#include<bits/stdc++.h>
using namespace std;
#define MAX INT_MAX
map<int,map<int,int>>a;
int n,m,st;
int main()
{
	cin>>n>>m>>st;
	int x,y,z;
	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d",&x,&y,&z);
		a[x][y]=z;
		a[y][x]=z;
	}
	vector<int>dist(n+1,MAX-1);
	vector<bool>final(n+1,true);
	final[st]=0;
	for(int i=1;i<n;i++)
	{
		x=-1,y=MAX;
		for(int j=1;j<=n;j++) 
		{
			if(final[j]==true&&y>dist[j])
			{
				x=j;
				y=dist[j];
			}
		}
		for(int j=1;j<=n;j++)
		{
			if(final[j]==true&&dist[j]>dist[x]+a[x][j])
			{
				dist[j]=dist[x]+a[x][j];
			}
		}
		final[x]=false;
	}
	cout<<dist.back()
;	return 0;
}
