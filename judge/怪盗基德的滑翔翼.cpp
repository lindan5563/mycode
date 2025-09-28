#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
int n,t; 
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",a+i);
		}
		for(int i=0;i<n;i++)
		{
			int best=0;
			for(int j=i-1;j>=0;j--)
			{
				if(a[j]>a[i]&&best<b[j])
				{
					best=b[j];
				}
			}
			b[i]=best+1;
		}
		int ans=b[0];
		for(int i=1;i<n;i++)
		{
			if(ans<b[i])
			{
				ans=b[i];
			}
			b[i]=0;
		}
		for(int i=n-1;i>=0;i--)
		{
			int best=0;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]>a[i]&&best<b[j])
				{
					best=b[j];
				}
			}
			b[i]=best+1;
		}
		for(int i=0;i<n;i++)
		{
			if(ans<b[i])
			{
				ans=b[i];
			}
			b[i]=0;
		}
		printf("%d\n",ans);
	}
	return 0;
}
