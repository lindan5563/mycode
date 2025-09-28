#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000][1000];
int dfs(int x,int d)
{
	if(d==n-1)
		return x;
	
} 
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	return 0;
}
