#include<bits/stdc++.h>
using namespace std;
bool b[100010];
int prime[500000],n,cnt=0;
bool find(int x)
{
	if(b[x]==0)
	{
		return 0;
	}
	for(int i=0;x!=0;i++)
	{
		if(x%prime[i]==0)
		{
			x=x/prime[i];
			if(x%prime[i]==0)
			{
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	for(int i=2;i*i<=100000;i++)
	{
		if(b[i]==0)
		{
			prime[cnt]=i;
			cnt++;
			for(int j=i*2;j<=100000;j+=i)
			{
				b[j]=1;
			}
		}
	}
	cin>>n;
	for(int i=6;i<=n;i++)
	{
		if(find(i))
		{
			printf("%d ",i);
		}
	}
	return 0;
}
