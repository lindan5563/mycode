#include<bits/stdc++.h>
using namespace std;
int a[10000],cnt;
int f(int x)
{
	if(x==0)
		return 0;
	cin>>a[x];
	return max(f(x-1),a[x]);
}
void d(int i,int t)
{
	if(i==0)
		return;
	cnt++;
	if(a[i]==t)
		return;
	d(i-1,t);
}
int main() 
{
	int n;
	cin>>n;
	int e=f(n);
	d(n,e);
	cout<<e<<" "<<cnt<<endl;
	return 0;
}
