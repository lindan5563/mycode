#include<bits/stdc++.h>
using namespace std;
unordered_set<string>jl;
struct node
{
	int cl[3][3];
	int x,y,vis;
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
		e=q.front();
		q.pop();
		if(e.x-1>=0)
		{
			node n=e;
			swap(n.cl[n.x][n.y],n.cl[n.x-1][n.y]);
			n.x=e.x-1;
			n.vis++;
			if(n.ty(ov))
			{
				cout<<n.vis;
				return 0;
			}
			string sta=to_string(n.cl[0][0])+to_string(n.cl[0][1])+to_string(n.cl[0][2])+to_string(n.cl[1][0])+to_string(n.cl[1][1])+to_string(n.cl[1][2])+to_string(n.cl[2][0])+to_string(n.cl[2][1])+to_string(n.cl[2][2]);  
			if(jl.find(sta)==jl.end())
			{
				q.push(n);
				jl.insert(sta);
			}
		}
		if(e.x+1<3)
		{
			node n=e;
			swap(n.cl[n.x][n.y],n.cl[n.x+1][n.y]);
			n.x=e.x+1;
			n.vis++;
			if(n.ty(ov))
			{
				cout<<n.vis;
				return 0;
			}
			string sta=to_string(n.cl[0][0])+to_string(n.cl[0][1])+to_string(n.cl[0][2])+to_string(n.cl[1][0])+to_string(n.cl[1][1])+to_string(n.cl[1][2])+to_string(n.cl[2][0])+to_string(n.cl[2][1])+to_string(n.cl[2][2]);  
			if(jl.find(sta)==jl.end())
			{
				q.push(n);
				jl.insert(sta);
			}
		}
		if(e.y+1<3)
		{
			node n=e;
			swap(n.cl[n.x][n.y],n.cl[n.x][n.y+1]);
			n.y=e.y+1;
			n.vis++;
			if(n.ty(ov))
			{
				cout<<n.vis;
				return 0;
			}
			string sta=to_string(n.cl[0][0])+to_string(n.cl[0][1])+to_string(n.cl[0][2])+to_string(n.cl[1][0])+to_string(n.cl[1][1])+to_string(n.cl[1][2])+to_string(n.cl[2][0])+to_string(n.cl[2][1])+to_string(n.cl[2][2]);  
			if(jl.find(sta)==jl.end())
			{
				q.push(n);
				jl.insert(sta);
			}
		}
		if(e.y-1>=0)
		{
			node n=e;
			swap(n.cl[n.x][n.y],n.cl[n.x][n.y-1]);
			n.y=e.y-1;
			n.vis++;
			if(n.ty(ov))
			{
				cout<<n.vis;
				return 0;
			}
			string sta=to_string(n.cl[0][0])+to_string(n.cl[0][1])+to_string(n.cl[0][2])+to_string(n.cl[1][0])+to_string(n.cl[1][1])+to_string(n.cl[1][2])+to_string(n.cl[2][0])+to_string(n.cl[2][1])+to_string(n.cl[2][2]);  
			if(jl.find(sta)==jl.end())
			{
				q.push(n);
				jl.insert(sta);
			}
		}
	}
	cout<<-1;
	return 0;
}
