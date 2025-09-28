#include<bits/stdc++.h>
using namespace std;
set<string>jl;
string str[2500];
int n,m,cnt;
void dfs(int x,int i)
{
	if(x==n)
	{
		if(jl.find(str[i])==jl.end())
		{
			jl.insert(str[i]);
			cnt++;
		}
		return;
	}
	if(str[i][x]=='*')
	{
		str[i][x]='0';
		dfs(x+1,i);
		str[i][x]='1';
		dfs(x+1,i);
		str[i][x]='*';
		return;
	}
	else
	{
		dfs(x+1,i);
		return;
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>str[i];
		dfs(0,i);
	}
	cout<<cnt;
	return 0;
}
