#include<bits/stdc++.h>
using namespace std;
bool gp[201][201];
int idg[201];
int n;
int main()
{
	cin>>n;
	int x;
	for(int i=1;i<=n;i++)
	{
		while(true)
		{
			scanf("%d",&x); 
			if(x==0)
			{
				break;
			}
			else
			{
				gp[i][x]=1;
			}
		}
		gp[i][i]=1;
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(gp[i][k]&&gp[k][j])
				{
					gp[i][j]=1;
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(gp[i][j]==1&&i!=j)
			{
				idg[j]++;
			}
		}
	}
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(idg[i]==0)
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
