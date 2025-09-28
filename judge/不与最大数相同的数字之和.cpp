#include<bits/stdc++.h>
using namespace std;
int n,sum,d=INT_MIN;
int e[100]; 
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",e+i);
		d=max(d,e[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(e[i]!=d)
			sum+=e[i];
	}
	cout<<sum;
	return 0;
}
