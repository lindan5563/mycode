#include<bits/stdc++.h>
using namespace std;
int a[10000];
int n,d,e;
int main()
{
	cin>>n>>d;
	for(int i=1;i<=d;i++)
	{
		scanf("%d",&e);
		a[e]+=i;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
