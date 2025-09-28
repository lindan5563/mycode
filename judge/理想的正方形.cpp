#include<bits/stdc++.h>
using namespace std;
int mp[1010][110];
int a,b,n,d=INT_MIN,x=INT_MAX,ans=INT_MAX;
int main()
{
	cin>>a>>b>>n;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			cin>>mp[i][j];
		}
	}
	for(int i=1;i<a;i++)
	{
		for(int j=1;j<b;j++)
		{
			for(int x=0;x<n;x++)
			{
				for(int y=0;y<n;y++)
				{
					d=max(d,mp[i+x][j+y]);
					x=min(x,mp[i+x][j+y]);
				}
			}
			ans=min(ans,d-x);
		}
	}
	cout<<ans;
	return 0;
}
/*
5 4 2
1  2  5  6
0  17 16 0
16 17 2  1
2  10 2  1
1  2  2  2
*/
