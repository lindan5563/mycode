#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200003],b[200003],c[200003];
int n,maxb,minc,sum;
bool fu;
signed main()
{
	maxb=INT_MIN;
	minc=INT_MAX;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		sum=sum+a[i];
		if(a[i] > -1)
		{
			fu=1;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		b[i] = max(b[i - 1] + a[i], a[i]);
		c[i] = min(c[i - 1] + a[i], a[i]);
		maxb = max(b[i], maxb);
		minc = min(c[i], minc);
	}
	if(fu)
		printf("%lld", max(maxb, sum - minc));
	else
		printf("%lld", maxb);
	return 0;
}
