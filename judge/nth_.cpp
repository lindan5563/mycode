#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int n,k;
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
		scanf("%d",a+i);
	sort(a,a+n); 
	cout<<a[k+1];
	return 0;
}
