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
	int n;
	cin>>n;
	bool flag=1;
	for(int i=2;i<=n-2;i++)
	{
		if(p(i)&&p(i+2))
		{
			printf("%d %d\n",i,i+2);
			flag=0;
		}
	}
	if(flag)
		printf("empty\n");
	return 0;
}
