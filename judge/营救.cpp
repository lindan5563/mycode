#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x;
	int y;
	int dis;
	bool operator < (const node &a)const
	{
		return dis>a.dis;
	}
};
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
char mp[1010][1010];
int n;
int x,y;
node ks,ov,e,stnode;
priority_queue<node>pq;
int main()
{
	freopen("sos.in","r",stdin);
	freopen("sos.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%s",mp[i]+1);
	}
	cin>>ks.x>>ks.y>>ov.x>>ov.y;
	stnode.x=ks.x;
	stnode.y=ks.y;
	stnode.dis=0;
	pq.push(stnode);
	while(!pq.empty())
	{
		e=pq.top();
		pq.pop();
		if(e.x==ov.x&&e.y==ov.y)
		{
			cout<<e.dis;
			return 0;
		}
		for(int j=0;j<4;j++)
		{  
			x=e.x+dx[j];
			y=e.y+dy[j];
			if(x>=1&&y>=1&&x<=n&&y<=n&&mp[x][y]=='0')
			{
				stnode.x=x;
				stnode.y=y;
				stnode.dis=e.dis+1;
				pq.push(stnode);
				mp[x][y]='1';
			}
		}
	}
	return 0;
}
