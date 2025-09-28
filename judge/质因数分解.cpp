#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,c=2;
	cin>>n;
	while(c*c<=n)
	{
		while(n%c==0)
		{
			n/=c;
			cout<<c<<" ";
		}
		c++; 
	}
	if(n!=1)
		cout<<n;
	return 0;
}
