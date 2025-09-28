#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,e=2;
	cin>>n;
	cout<<n<<"=";
	bool flag=0;
	while(n!=0)
	{
		while(n%e==0)
		{
			n/=e;
			if(flag)
			{
				cout<<"*"<<e;
			}
			else
			{
				cout<<e;
				flag=1;
			}
			if(n==0)
			{
				return 0;
			}
		}
		e++;
	}
	return 0;
}
