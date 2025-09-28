#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>gp;
int n,p,k,a,b,l;
int main()
{
	scanf("%d%d%d",&n,&p,&k);
	gp.resize(n+1);
	for(int i=1;i<=n;i++)
	{
		gp[i].resize(n+1,INT_MAX);
	}
	for(int i=0;i<p;i++)
	{
		scanf("%d%d%d",&a,&b,&l);
		gp[a][b]=l;
		gp[b][a]=l;
	}
	vector<bool>final(n+1,false);
	vector<pair<int,int>>dist(n+1,{INT_MAX,INT_MIN});
	vector<int>father(n+1,14514);
	dist[1]={0,0};
	father[1]=0;
	for(int i=1;i<n;i++)
	{
		a=1;
		while(final[a]==true)
		{
			a++;
		}
		for(int j=2;j<=n;j++)
		{
			if(final[j]==false&&dist[j].first<dist[a].first)
			{
				a=j;
			}
		}
		final[a]=true;
		for(int j=1;j<=n;j++)
		{
			if(gp[a][j]!=INT_MAX&&dist[a].first+gp[a][j]<dist[j].first)
			{
				dist[j].first=dist[a].first+gp[a][j];
				dist[j].second=max(dist[a].second,gp[a][j]);
				father[j]=father[a]+1;
			}
		}
	}
	if(dist[k].second==INT_MIN)
	{
		cout<<-1;
	}
	else
	{
		cout<<dist[k].second;
	}
	return 0;
}
