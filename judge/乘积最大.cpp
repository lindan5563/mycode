#include<bits/stdc++.h>
using namespace std;
map<string,map<int,int>>jl;
string s;
int n,k;
int dfs(string number,int t)
{
	if(t==0)
	{
		return atoi(number.c_str());
	}
	if(number.size()<t+1)
	{
		return 0;
	}
	if(jl[number].count(t))
	{
		return jl[number][t];
	}
	int ret=INT_MIN;
	for(int i=1;i<number.size();i++)
	{
        int x=atoi(number.substr(0,i).c_str());
        int y=dfs(number.substr(i),t-1);
        ret=max(ret,x*y);
    }
	jl[number][t]=ret;
	return ret;
}
int main()
{
	cin>>n>>k>>s;
	cout<<dfs(s,k);
	return 0;
}
