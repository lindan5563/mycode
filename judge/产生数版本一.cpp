#include<bits/stdc++.h>
using namespace std;
struct node
{
	vector<char>link;
};
set<string>s;
node ct[127];
string t;
int cnt=1,n;
int main()
{
	cin>>t>>n;
	for(int i=0;i<n;i++)
	{
		char a,b;
		cin>>a>>b;
		ct[a].link.push_back(b);
	}
	queue<string>q;
	q.push(t);
	s.insert(t);
	while(!q.empty())
	{
		string e=q.front();
		q.pop();
		for(int i=0;i<e.size();i++)
		{
			for(int j=0;j<ct[e[i]].link.size();j++)
			{
				char p=e[i];
				e[i]=ct[e[i]].link[j];
				if(s.find(e)==s.end())
				{
					q.push(e);
					s.insert(e);
					cnt++;
				}
				e[i]=p;
			}
		}
	}
	cout<<cnt;
	return 0;
}
