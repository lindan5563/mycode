#include<bits/stdc++.h>
using namespace std;
struct node
{
	bool vis;
	int lct;
	int next;
	vector<int>link;
};
vector<node>gp;
vector<int>dp;
vector<int>path;
int n;
int dfs(int x)
{
	if(gp[x].vis==1)
	{
		return dp[x];
	}
	int ret=gp[x].lct;
	for(int i=0;i<gp[x].link.size();i++)
	{
		if(ret<gp[x].lct+dfs(gp[x].link[i]))
		{
			ret=gp[x].lct+dp[gp[x].link[i]];
			gp[x].next=gp[x].link[i];
		}
	}
	gp[x].vis=1;
	dp[x]=ret;
	return ret;
}
void rbk(int x)
{
	path.push_back(x);
	if(gp[x].next==-1)
	{
		for(int i=0;i<path.size()-1;i++)
		{
			printf("%d-",path[i]);
		}
		printf("%d\n",path[path.size()-1]);
		return;
	}
	else
	{
		rbk(gp[x].next);
	}
}
int main()
{
	cin>>n;
	gp.resize(n+1);
	dp.resize(n+1);
	int x,y;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&gp[i].lct);
		gp[i].next=-1;
	}
	while(1)
	{
		scanf("%d%d",&x,&y);
		if(x==0&&y==0)
		{
			break;
		}
		gp[x].link.push_back(y);
	}
	int ans=INT_MIN,r;
	for(int i=1;i<=n;i++)
	{
		if(ans<dfs(i))
		{
			r=i;
			ans=dp[i];
		}
	}
	rbk(r);
	cout<<ans;
	return 0;
}
