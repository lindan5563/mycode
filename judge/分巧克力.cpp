#include<bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000];
int n,m;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
	{
        scanf("%d%d",a+i,b+i);
    }
    int mx=0;
    for(int i=1;i<=min(a[0],b[0]);i++)
	{
        int sum=0;
        for (int j=0;j<n;j++)
		{
            sum+=(a[j]/i)*(b[j]/i);
        }
        if(sum>=m)
		{
            mx=i;
        }
    }
    printf("%d",mx);
    return 0;  
}
