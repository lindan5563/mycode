#include<bits/stdc++.h>
using namespace std;
struct node
{
	string s;
	int vis;
};
map<string,map<int,bool>>jl; 
string ans="-1";
node n;
int main()
{
	cin>>n.s>>n.vis;
	queue<node>q;
	q.push(n);
	jl[n.s][n.vis]=1;
	while(!q.empty())
	{
		node e=q.front();
		q.pop();
		for(int i=0;i<e.s.size();i++)
		{
			for(int j=i+1;j<e.s.size();j++)
			{
				node next=e;
				swap(next.s[i],next.s[j]);
				next.vis--;
				if(next.s[0]!='0'&&next.vis!=-1&&jl[next.s][next.vis]==0)
				{
					if(atoi(next.s.c_str())>atoi(ans.c_str()))
					{
						ans=next.s;
						cout<<ans<<endl;
					}
					jl[next.s][next.vis]=1;
					q.push(next);
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
