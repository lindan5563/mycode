#include<bits/stdc++.h>
using namespace std;
long long sum;
long long fib(long long x)
{
	sum+=x;
	if(x==1)
		return 1;
	return x*fib(x-1);
}
int main()
{
	long long n;
	cin>>n;
	cout<<sum<<" "<<fib(n-1);
	return 0;
}
