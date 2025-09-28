#include<bits/stdc++.h>
using namespace std;
double dfs()
{
	char s[100];
	cin>>s;
	switch(s[0])
	{
		case '+':
			return dfs()+dfs();
		case '-':
			return dfs()-dfs();
		case '*':
			return dfs()*dfs();
		case '/':
			return dfs()/dfs();
		default:
			return atof(s);
	}
}
int main()
{
	printf("%f\n",dfs());
	return 0;
}
