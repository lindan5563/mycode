#include<bits/stdc++.h>
using namespace std;
int n,m;
int find(vector<int>&dist,vector<bool>&final)
{
    int a=-1;
    for(int i=0;i<n;i++)
	{
        if(final[i])
		{
            if(a==-1||dist[i]<dist[a])
			{
                a=i;
            }
        }
    }
    return a;
}
int main()
{
	cin>>n>>m;
	vector<vector<int>>a(n,vector<int>(n,INT_MAX));
	vector<int>dist(n,INT_MAX);
	vector<bool>final(n,true);
	vector<int>parent(n,-1);
	for(int i=0;i<m;i++)
	{
		int y,z,x;
		scanf("%d%d%d",&y,&z,&x);
		if(y!=z)
		{
			a[y-1][z-1]=min(a[y-1][z-1],x);
        	a[z-1][y-1]=min(a[z-1][y-1],x);
		}
	}
	dist[0]=0;
	for(int i=0;i<n-1;i++)
	{
		int u=find(dist,final);
		if(u==-1)
		{
			break;
		}
		final[u]=false;
		for(int i=0;i<n;i++)
		{
			if(a[u][i]!=INT_MAX&&dist[u]!=INT_MAX&&final[i]&&a[u][i]+dist[u]<dist[i])
			{
				dist[i]=a[u][i]+dist[u];
				parent[i]=u;
			}
		}
	}
	if(dist.back()==INT_MAX)
	{
		cout<<-1;
	}
	else
	{
		cout<<dist.back();
	}
	return 0;
}
