#include<bits/stdc++.h>
using namespace std;
int out[1000][1000];
int bh=1;
void fg(int x,int y,int n)
{
	if(n==0)
	{
		out[x][y]=bh;
		return;
	}
	bh++; 
	fg(x,y,n-1);
	if(y+n<4)
		fg(x,y+n,n-1);
	if(x+n<4)
		fg(x+n,y,n-1);
	if(x+n<4&&y+n<4)
		fg(x+n,y+n,n-1);
}
int main()
{
	fg(0,0,4);
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<out[i][j]<<" ";
		}
		printf("\n");
	}
	return 0;
}
