#include<bits/stdc++.h>
using namespace std;
bool p(int x)
{
	if(x<2)
		return 0;
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(p(i))
		{
			cnt++;
			printf("%d ",i);
		}
		if(cnt==5)
		{
			cnt=0;
			printf("\n");
		}
	}
	return 0;
}
