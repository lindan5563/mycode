#include<bits/stdc++.h>
using namespace std;
int a[10000];
int n,t,f;
int find(int x,int l,int r)
{
	if(l>=r)
		return l+1;
	int mid=(r-l)/2+l;
	if(a[mid]==x)
		return mid;
	else if(a[mid]>x)
		return find(x,l,mid);
	else
		return find(x,mid+1,r);
}
int main()
{
	cin>>n>>t;
	for(int i=0;i<n;i++)
		scanf("%d",a+i);
	while(t--)
	{
		scanf("%d",&f);
		printf("%d\n",find(f,0,n));
	}
	return 0;
}
/*
10
16 63 20 30 70 76 73 79 23 40
*/
