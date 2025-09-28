#include<bits/stdc++.h>
using namespace std;
int vis[200010];
int n,k;
int main()
{
	cin>>n>>k;
	memset(vis,-1,sizeof(vis));
	queue<int> q;
	q.push(n);
    vis[n]=0;
    while(!q.empty())
	{
		int e=q.front();
        q.pop();
        if(e==k)
		{
            cout<<vis[e];
            return 0;
        }
        if(e<k&&e*2<200010&&vis[e*2]==-1)
		{
            vis[e*2]=vis[e]+1;
            q.push(e*2);
        }
        if(e+1<200010&&vis[e+1]==-1)
		{
            vis[e+1]=vis[e]+1;
            q.push(e+1);
        }
        if(e-1>=0&&vis[e-1]==-1)
		{
            vis[e-1]=vis[e]+1;
            q.push(e-1);
        }
    }
    return 0;
}
