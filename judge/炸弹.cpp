#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1002][1002];
int h[1002];
int w[1002];
int zl[2000];
int yl[2000];
int sum,ans=INT_MAX;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
			h[i]+=a[i][j];
			w[j]+=a[i][j];
			zl[i+j]+=a[i][j];
			yl[i-j+1000]+=a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]==0)
			{
				sum=h[i]+w[j]+zl[i+j]+yl[i-j+1000];
				ans=min(sum,ans);
			}
		}
	}
    if(ans==INT_MAX)
    {
    	ans=0;
    }
    printf("%d",ans);
	return 0;
}
