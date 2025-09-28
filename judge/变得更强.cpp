#include<bits/stdc++.h>
using namespace std;
int x,n;
int a[100];
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",a+i);
		if(a[x]<=a[i])
			x=i;
	}
	if(x==0)
		cout<<0;
	else
		cout<<a[x]+1-a[0];
	return 0;
}
