#include<bits/stdc++.h>
using namespace std;
bool jl[4][8][11];
struct node
{
	int a[3];
	int vis;
};
node st,e;
int r[3]={3,7,10};
int t;
int main()
{
//	freopen("water.in","r",stdin);
//	freopen("water.out","w",stdout);
	st.a[2]=10;
	st.vis=0;
	jl[0][0][10]=1;
	cin>>t;
	queue<node>q;
	q.push(st);
	while(!q.empty())
	{
		e=q.front();
		q.pop();
		for(int i=0;i<3;i++)
		{
			if(e.a[i]==0)
				continue;
			for(int j=0;j<3;j++)
			{
				if(i!=j&&e.a[j]!=r[j])
				{
					node u=e;
					u.a[j]+=u.a[i];
					u.a[i]=0;
					if(u.a[j]>r[j])
					{
						u.a[i]=u.a[j]-r[j];
						u.a[j]=r[j];
					}
					u.vis++;
					if(!jl[u.a[0]][u.a[1]][u.a[2]])
					{
						jl[u.a[0]][u.a[1]][u.a[2]]=1;
						q.push(u);
						if(u.a[2]==t)
						{
							cout<<u.vis;
							return 0;
						}
					}
				}
			}
		}
	}
	return 0;  
}
