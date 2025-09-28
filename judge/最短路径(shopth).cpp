#include<bits/stdc++.h>
using namespace std;
long long gp[81][81];
int main()
{
	int n,st;
	string s;
	cin>>n>>st;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>s;
			if(s=="-")
			{
				gp[i][j]=INT_MAX;
			}
			else
			{
				gp[i][j]=atoi(s.c_str());
			}
		}
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(gp[i][j]>gp[i][k]+gp[k][j])
				{
					gp[i][j]=gp[i][k]+gp[k][j];
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(st!=i)
		{
			printf("(%d -> %d) = %lld\n",st,i,gp[st][i]);
		}
	}
	return 0;
}
