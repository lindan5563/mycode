#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,ji=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
		ji*=i;
	}
	printf("%d %d",sum,ji);
	return 0;
}
