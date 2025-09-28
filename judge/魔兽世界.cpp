#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x;
	int y;
	int dis;
};
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
char mp[101][101];
node a[26][2];
int n,m;
int x,y;
int main()
{
//	freopen("way.in","r",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%s",mp[i]+1);
		for(int j=1;j<=m;j++)
		{
			if(mp[i][j]>='A'&&mp[i][j]<='Z')
			{
				a[mp[i][j]-'A'][1].x=a[mp[i][j]-'A'][0].x;
				a[mp[i][j]-'A'][1].y=a[mp[i][j]-'A'][0].y;
				a[mp[i][j]-'A'][0]={i,j};
			}
		}
	}
	node e;
	queue<node>q;
	q.push({1,1,0});
	mp[1][1]=1;
	while(!q.empty())
	{
		e=q.front();
		q.pop();
		if(e.x==n&&e.y==m)
		{
			cout<<e.dis;
			return 0;
		}
		for(int j=0;j<4;j++)
		{
			x=e.x+dx[j];
			y=e.y+dy[j];
			if(x>=1&&y>=1&&x<=n&&y<=m&&mp[x][y]=='0')
			{
				q.push({x,y,e.dis+1});
				mp[x][y]='1';
			}
			else if(x>=1&&y>=1&&x<=n&&y<=m&&mp[x][y]>='A'&&mp[x][y]<='Z')
			{
				if(x==a[mp[x][y]-'A'][0].x&&y==a[mp[x][y]-'A'][0].y)
				{
					q.push({a[mp[x][y]-'A'][1].x,a[mp[x][y]-'A'][1].y,e.dis+1});
					mp[x][y]='1';
				}
				else if(x==a[mp[x][y]-'A'][1].x&&y==a[mp[x][y]-'A'][1].y)
				{
					q.push({a[mp[x][y]-'A'][0].x,a[mp[x][y]-'A'][0].y,e.dis+1});
					mp[x][y]='1';
				}
			}
		}
	}
	cout<<"No Solution.";
	return 0;
}
