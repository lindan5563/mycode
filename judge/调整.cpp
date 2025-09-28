#include<bits/stdc++.h>
using namespace std;  
int main()
{
	int n,a[10010],d;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i==0||a[i]>a[d])
			d=i;
	}
	swap(a[d],a[0]);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
    return 0;
}
