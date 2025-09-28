#include<bits/stdc++.h>
using namespace std;
int a[100000];
int n,m=0;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",a+i);
		if(a[m]<a[i])
		{
			m=i;
		}
	}
	swap(a[0],a[m]);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
