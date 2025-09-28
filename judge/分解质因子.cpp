#include<bits/stdc++.h>
using namespace std;
void fj(int n,int i)
{
	if(n==1)
		return; 
	while(n%i!=0)
	{
		i++;
	}
	cout<<i<<' ';
	fj(n/i,i);
}
int main()
{
	int n;
	cin>>n;
	fj(n,2);
	return 0;
}
