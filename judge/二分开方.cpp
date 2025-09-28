#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double x;
	cin>>x;
	long double l=0.0,r=x,mid;
	while(r-l>0.00001)
	{
		mid=l+(r-l)/2.0;
		if(mid*mid>x)
		{
			r=mid;
		}
		else if(mid*mid<x)
		{
			l=mid;
		}
		else if(mid*mid==x)
		{
			cout<<mid;
			return 0;
		}
	}
	cout<<l; 
	return 0;
}
