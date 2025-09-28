#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[63];
int n;
signed main()
{
	scanf("%lld",&n);
	a[1]=1;
	a[2]=2;
	a[3]=4;
	for(int i=4;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	printf("%lld",a[n]);
	return 0;
}
