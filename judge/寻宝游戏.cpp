#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int hd[20];
int n,m,x,y,sum;
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
		hd[i]=sum;
	}
	for(int i=0;i<n;i++)
	{
		if(hd[x]<hd[i])
			x=i;
	}
	for(int i=0;i<m;i++)
	{
		if(a[x][y]>a[x][i])
			y=i;
	}
	cout<<y<<" "<<x;
	return 0;
}
