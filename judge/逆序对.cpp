#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int n,cnt;
void fj(int i)
{
	for(int j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
			cnt++; 
	}
	if(i+1<n)
		fj(i+1);
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		scanf("%d",a+i);
	fj(0);
	cout<<cnt;
	return 0;
}
