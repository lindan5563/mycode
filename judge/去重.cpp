#include<bits/stdc++.h>
using namespace std;
int a[100000];
int n,b,cnt;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	sort(a,a+n,less<int>());
	cnt++;
	b=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]!=b)
		{
			cnt++;
			b=a[i];
		}
	}
	cout<<cnt;
	return 0;
}
