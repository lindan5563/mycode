#include<bits/stdc++.h>
using namespace std;
int f[405][405],len,a[405],n,sum[405],out;
int main()
{
    scanf("%d",&n);
    memset(f,0x3f,sizeof(f));
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        a[i + n] = a[i];
    }
    for(int i = 1;i<=2* n;i++)
	{
	    sum[i] = sum[i-1]+a[i];
	    f[i][i]=0;
	}    
    for(int len=2;len<=n;len++)
    {
    	for(int i=1;i + len - 1 <= 2 *n;i++)
        {
            int j=i+len-1;
            for(int k=i;k<j;k++)
			{
				f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]+sum[j]-sum[i-1]);
			}
        }
	}
	out=INT_MAX;
	for(int i=1;i<=n;i++)
	{
		if(out>f[i][i+n-1])
		{
			out=f[i][i+n-1];
		}
	}
    printf("%d\n",out);
    memset(f,-0x3f,sizeof(f));
    for(int i=1;i<=2*n;i++)
    {
		f[i][i]=0;
	}
	for(int len=2;len<=n;len++)
    {
    	for(int i=1;i + len - 1 <= 2 * n;i++)
        {
            int j=i+len-1;
            for(int k=i;k<j;k++)
			{
				f[i][j]=max(f[i][j],f[i][k]+f[k+1][j]+sum[j]-sum[i-1]);
			}
        }
	}
	out=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		if(out<f[i][i+n-1])
		{
			out=f[i][i+n-1];
		}
	}
	printf("%d\n",out);
    return 0;
}
