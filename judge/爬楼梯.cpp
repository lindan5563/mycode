#include<bits/stdc++.h>
using namespace std;
int jl[10000];
int fib(int x)
{
	if(x<3)
		return x;
	if(x==3)
		return 4;
	if(x==4)
		return 7;
	if(jl[x]!=0)
		return jl[x];
	return jl[x]=fib(x-1)+fib(x-2)+fib(x-3);
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			return 0;
		cout<<fib(n)<<endl;
	}
	return 0;
}
