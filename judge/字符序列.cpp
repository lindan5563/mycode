#include<bits/stdc++.h>
using namespace std;
string has="ABC";
string out;
bool use[15];
int n,ans;
bool pd(int x)
{
	if(4<=x)
	{
		string a=out.substr(x-2,2);
		string b=out.substr(x-2-2,2);
		if(a==b)
		{
			return false;
		}
	}
	return true;
}
void dfs(int x)
{
	if(x==n)
	{
		ans++;
		return;
	}
	for(int i=0;i<3;i++)
	{
		use[i]=1;
		out.push_back(has[i]);
		if(pd(x+1))
			dfs(x+1);
		out.erase(out.size()-1,1);
		use[i]=0;
	}
}
int main()
{
	cin>>n;
	dfs(0);
	cout<<ans;
	return 0;
}
