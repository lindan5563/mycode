#include<bits/stdc++.h>
using namespace std;
struct node
{
	int cl[3][3];
	char bf;
	int x,y;
	bool ty(node x)
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(cl[i][j]!=x.cl[i][j])
				{
					return 0;
				}
			}
		}
		return 1;
	}
	void in()
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>cl[i][j];
				if(cl[i][j]==0)
				{
                    x=i;
                    y=j;
                }
			}
		}
	}
};
node lp,ov,e;
int c,cnt;
int main()
{
	lp.in();
	ov.in();
	queue<node>q;
	q.push(lp);
	while(!q.empty())
	{
		c=q.size();
		for(int t=0;t<c;t++)
		{
			e=q.front();
			q.pop();
			if(e.ty(ov))
			{
				cout<<cnt;
				return 0;
			}
			if(e.bf!='s'&&e.x-1>=0)
			{
				node n=e;
				n.bf='w';
				swap(n.cl[n.x][n.y],n.cl[n.x-1][n.y]);
				n.x=e.x-1;
				q.push(n);
			}
			if(e.bf!='w'&&e.x+1<3)
			{
				node n=e;
				n.bf='s';
				swap(n.cl[n.x][n.y],n.cl[n.x+1][n.y]);
				n.x=e.x+1;
				q.push(n);
			}
			if(e.bf!='a'&&e.y+1<3)
			{
				node n=e;
				n.bf='d';
				swap(n.cl[n.x][n.y],n.cl[n.x][n.y+1]);
				n.x=e.y+1;
				q.push(n);
			}
			if(e.bf!='d'&&e.y-1>=0)
			{
				node n=e;
				n.bf='a';
				swap(n.cl[n.x][n.y],n.cl[n.x][n.y-1]);
				n.x=e.y-1;
				q.push(n);
			}
		}
		cnt++;
	}
	cout<<-1;
	return 0;
}
