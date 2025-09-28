#include <bits/stdc++.h>
using namespace std;
int n;
int dfs(int x)
{
	if(x>n)
		return 1;
	return dfs(x+1)*2;
}
int main()
{
	cin>>n;
	cout<<dfs(1)*3-3;
	return 0;
}
