#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	int x[110],y[110];
    scanf("%d%d%d",&n,&a,&b);
    for(int i=1;i<=n;i++)
	{
    	for(int j=1;j<=a;j++)
    		x[i]=j;
	}
	for(int i=1;i<=n;i++)
	{
    	for(int j=1;j<=b;j++)
    		y[i]=j;
	}
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(x[i]==y[i])
			cnt++;
	}
	printf("%d",cnt);
    return 0;
}
