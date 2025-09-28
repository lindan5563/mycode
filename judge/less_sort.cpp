#include<bits/stdc++.h>
using namespace std;
int a[100000];
int n;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	sort(a,a+n,less<int>());
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
