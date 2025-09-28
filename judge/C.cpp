#include<bits/stdc++.h>
using namespace std;
int ba[10000];
int jc(int x)
{
	if(x==1)
		return 1;
	if(ba[x]!=0)
		return ba[x];
	return x*jc(x-1);
}
long long C(int n,int m)
{
	return jc(n)*1.0/jc(jc(m)*(n-m));
}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<C(n,m);
	return 0;
}
