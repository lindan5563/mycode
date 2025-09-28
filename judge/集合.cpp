#include <bits/stdc++.h>
using namespace std;
int n,m,a[10010],cnt;
int main()
{
    cin>>n;
    cnt++;
    a[cnt]=1;
    int i=1,j=1;
	while(cnt<=n)
	{
        if(2*a[i]+1>3*a[j]+1)
		{
            if(a[cnt]!=3*a[j]+1)
            {
            	cnt++;
				a[cnt]=3*a[j]+1;
            } 
            j++;
        }
		else
		{
			if(a[cnt]!=2*a[i]+1)
            {
            	cnt++;
            	a[cnt]=2*a[i]+1;
            }
            i++;
        }
    }
    for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
    return 0;
}
