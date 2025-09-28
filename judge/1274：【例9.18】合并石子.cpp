#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>mb;
vector<int>f;
int in(vector<int>sj)
{
	for(int i=0;i<mb.size();i++)
	{
		bool flag=1;
		for(int j=0;j<sj.size();j++)
		{
			if(sj[j]!=mb[i][j])
			{
				flag=0;
				break;
			}
		}
		if(flag)
			return i;
	}
	return -1;
}
int dfs(vector<int>&sj,int df)
{
	if(sj.size()==2)
		return df;
	int u=in(sj);
	if(u!=-1)
		return f[u];
	int ret=INT_MAX;
	for(int i=0;i<sj.size()-2;i++)
	{
		vector<int>next(sj);
		next[i]=next[i]+next[i+1];
		next.erase(next.begin()+i+1);
		for(int j=0;j<next.size()-1;j++)
			printf("%d ",next[j]);
		printf(" %d\n",df+next[i]);
		ret=min(ret,dfs(next,df+next[i]));
	}
	f.push_back(ret);
	mb.push_back(sj);
	return ret;
}
int main()
{
	int n,e;
	cin>>n;
	vector<int>a(n+1);
	for(int i=0;i<n;i++)
	{
		cin>>e;
		a[i]=e;
	}
	cout<<dfs(a,0);
	return 0;
}
