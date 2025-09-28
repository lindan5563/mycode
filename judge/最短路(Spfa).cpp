#include<bits/stdc++.h>
using namespace std;
struct node
{
	vector<pair<int,int>>link;
};
vector<node>gp;
int n,m;
int main()
{
	scanf("%d%d",&n,&m);
	gp.resize(n+1);
	int x,y,z;
	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d",&x,&y,&z);
		if(x!=y)
		{
			gp[x].link.push_back({y,z});
			gp[y].link.push_back({x,z});
		}
	}
	vector<bool>final(n+1,true);
	vector<int>dist(n+1,INT_MAX);
	dist[1]=0;
	for(int i=1;i<n;i++)
	{
		x=-1,y=INT_MAX;
		for(int j=1;j<=n;j++)
		{
			if(y>dist[j]&&final[j]==true)
			{
				y=dist[j];
				x=j;
			}
		}
		if(x==-1)
		{
			break;
		}
		final[x]=false;
		for(int j=0;j<gp[x].link.size();j++)
		{
			if(dist[x]+gp[x].link[j].second<dist[gp[x].link[j].first])
			{
				dist[gp[x].link[j].first]=dist[x]+gp[x].link[j].second;
			}
		}
	}
	cout<<dist.back();
	return 0;
}
