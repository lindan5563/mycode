#include<bits/stdc++.h>
using namespace std;
int a[2000010];
int n,m,k;
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&k);
		int l=1,r=n,out=-1,mid;
		while(l<r)
		{
			mid=(l+r)/2;
			if(a[mid-1]>=k)
			{
				r=mid;
			}
			else
			{
				l=mid+1;
			}
		}
		if(a[l-1]==k)
		{
			out=l;
		}
		printf("%d ",out);
	}
	return 0;
}
