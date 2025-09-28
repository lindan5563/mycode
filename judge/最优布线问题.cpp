#include<bits/stdc++.h>
using namespace std;
int gp[101][101];
bool b[101];
int n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&gp[i][j]);
		}
	}
	int x=0,y,ans=0;
	b[x]=1;
	for(int i=1;i<n;i++)
	{
		y=INT_MAX;
		for(int j=0;j<n;j++)
		{
			if(b[j]==1)
			{
				for(int k=0;k<n;k++)
				{
					if(b[k]==0&&gp[j][k]!=0&&y>gp[j][k])
					{
						y=gp[j][k];
						x=k;
					}
				}
			}
		}
		b[x]=1;
		ans+=y;
	}
	cout<<ans;
	return 0;
}
