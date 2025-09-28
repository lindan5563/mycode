#include<bits/stdc++.h>
using namespace std;
int n,cnt;
char s[80];
void dfs(int x)
{
	if(x==n)
	{
		for(int i=0;i<x-2;i++)
		{
			if(s[i]==s[i+1]&&s[i+1]==s[i+2])
				return;
		}
		cnt++;
//		cout<<s<<endl;
		return;
	}
	for(int i=0;i<x-2;i++)
	{
		if(s[i]==s[i+1]&&s[i+1]==s[i+2])
			return;
	}
	s[x]='0';
	dfs(x+1);
	s[x]='1';
	dfs(x+1);
	return;
}
int main()
{
	cin>>n;
	dfs(0);
	cout<<cnt;
	return 0;
}
