#include<bits/stdc++.h>
using namespace std;
map<int,map<string,int>>jl;
string t;
int dfs(int i,string s)
{
	if(i>=s.size())
	{
		return 0;
	}
	if(jl[i][s]!=0)
	{
		return jl[i][s]; 
	}
	int ret=dfs(i+1,s);
	string next=s;
	next.erase(i,1);
	ret=max(ret,1+dfs(i,next));
	for(int j=0;j<t.size();j++)
	{
		next=s;
		next.insert(i,1,t[j]);
		ret=max(ret,1+dfs(i+1,next));
		next=s;
		if(i<next.size())
		{
			next[i]=t[j];
		}
		ret=max(ret,1+dfs(i+1,next));
	}
	jl[i][s]=ret; 
	return ret;
}
int main()
{
	string a;
	cin>>a>>t;
	cout<<dfs(0,a);
	return 0;
}
