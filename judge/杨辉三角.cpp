#include<bits/stdc++.h>
using namespace std;
int yj[1000][1000];
int n;
void dg(int x,int y)
{
	if(x>n)
		return;
	if(yj[x][y]!=0)
		return;
	if(y==1)
		yj[x][y]=1;
	if(x==y)
	{
		yj[x][y]=1;
		dg(x+1,1);
	}
	else
	{
		yj[x][y]=yj[x-1][y]+yj[x-1][y-1];
		dg(x,y+1);
	}
}
int main()
{
	cin>>n;
	dg(1,1);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",yj[i][j]);
		}
		printf("\n");
	}
	return 0;
}
