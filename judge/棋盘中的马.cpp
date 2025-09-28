#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x;
	int y;
	int step;
};
int dx[]={-2,-2,-1,+1,+2,+2,+1,-1};
int dy[]={-1,+1,+2,+2,+1,-1,-2,-2};
bool vis[1000][1000];
node st,ed;
int cnt,n,m;
int main()
{
	cin>>n>>m>>st.x>>st.y>>ed.x>>ed.y;
	st.x--,st.y--;
	ed.x--,ed.y--;
	queue<node>q;
	q.push(st);
	vis[st.x][st.y]=1;
	while(!q.empty())
	{
		node e=q.front();
		q.pop();
		if(e.x==ed.x&&e.y==ed.y)
		{
			cout<<e.step;
			return 0;
		}
		for(int i=0;i<8;i++)
		{
			int xx=e.x+dx[i];
			int yy=e.y+dy[i];
			if(vis[xx][yy]==0&&xx>=0&&yy>=0&&xx<n&&yy<m)
			{
				vis[xx][yy]=1;
				q.push({xx,yy,e.step+1});
			}
		}
	}
	cout<<-1;
	return 0;
}
