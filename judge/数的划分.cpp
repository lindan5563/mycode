#include<bits/stdc++.h>
using namespace std;
int cnt;
void dfs(int n,int k,int bf)
{
	if(k==0&&n==0)
	{
		cnt++;
		return;
	}
	if(k==0)
	{
		return;
	}
	for(int i=bf;i<=n;i++)
	{
		dfs(n-i,k-1,i);
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	dfs(n,k,1);
	cout<<cnt;
	return 0;
}

