#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int fib(int x)
{
	if(x==1)
		return 2;
	if(x==2)
		return 2;
	if(x==3)
		return 4;
	if(a[x]!=0)
		return a[x];
	return a[x]=fib(x-1)+fib(x-2);
}
int main()
{
	int n;
	cin>>n;
	cout<<fib(n);
	return 0;
}
