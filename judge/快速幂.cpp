#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double x,l,ans;
	cin>>x>>l;
	ans=x;
	while(l!=1)
	{
		if(int(l)%2==0)
		{
			l/=2;
			ans=ans*ans;
		}
		else
		{
			l--;
			ans=ans*x;
		}
	}
	cout<<ans;
	return 0;
}
