#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=m-i;j++)
		{
			int k=m-i-j;
			if(i*15+j*10+k*5==n)
				printf("%d %d %d\n",i,j,k);
		}
	}
	return 0;
}
