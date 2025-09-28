#include<bits/stdc++.h>
using namespace std;
int a[4096][4096];
int m;
int cnt=1;
void hello_world(int n,int x,int y)
{
	if(n==2)
	{
		a[x][y]=cnt;
		a[x][y+1]=cnt+1;
		a[x+1][y]=cnt+1;
		a[x+1][y+1]=cnt;
		return;
	}
	hello_world(n/2,x,y);
	cnt+=n/2;
	hello_world(n/2,x,y+n/2);
	hello_world(n/2,x+n/2,y);
	cnt-=n/2;
	hello_world(n/2,x+n/2,y+n/2);
}
int main()
{
	int n;
	cin>>n;
	n=1<<n;
	m=n;
	hello_world(n,0,0);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
			if(a[i][j]<10)
			{
				printf(" ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
