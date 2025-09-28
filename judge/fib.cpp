#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
long long fib(long long x)
{
	if(x<3)
		return x;
	if(a[x]!=0)
		return a[x];
	return a[x]=fib(x-1)+fib(x-2);
}
int main()
{
	long long n;
	cin>>n;
	cout<<fib(n+1);
	return 0;
}
