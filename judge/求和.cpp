#include<bits/stdc++.h>
using namespace std;
long long a[100010],sum;
int k,n;
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(int i=0;i<=n-k;i++)
	{
		for(int j=i;j<k+i;j++)
			sum+=a[j];
	}
	cout<<sum;
	return 0;
}
