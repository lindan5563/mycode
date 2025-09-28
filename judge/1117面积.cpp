#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x;
	int y;
};
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
char mp[101][101];
int c,cnt;
int x,y;
int main()
{
	freopen("area.in","r",stdin);
	freopen("area.out","w",stdout);
	memset(mp,'0',sizeof(mp));
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			cin>>mp[i][j];
		}
	}
	node e;
	queue<node>q;
	q.push({1,1});
	while(!q.empty())
	{
		c=q.size();
		for(int i=0;i<c;i++)
		{
			e=q.front();
			q.pop();
			mp[e.x][e.y]='1';
			for(int j=0;j<4;j++)
			{
				x=e.x+dx[j];
				y=e.y+dy[j];
				if(x>=0&&y>=0&&x<=11&&y<=11&&mp[x][y]=='0')
				{
					q.push({x,y});
				}
			}
		}
	}
	for(int i=2;i<=9;i++)
	{
		for(int j=2;j<=9;j++)
		{
			if(mp[i][j]=='0')
				cnt++;
		}
	}
	cout<<cnt;
}
