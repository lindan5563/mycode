#include<bits/stdc++.h>
using namespace std;  
int main()
{  
    int n,a[1000];  
    cin>>n;
    for(int i=0;i<n;i++)
    	scanf("%d",a+i);
    int dp[1000]={1};
    for(int i=0;i<1000;i++)
    	dp[i]=1;
    for(int i=1;i<n;i++)
	{
        for(int j=0;j<i;j++)
		{
            if(a[i]>a[j])
                dp[i]=max(dp[i],dp[j]+1);
        }  
    }
    int l=0;  
    for(int i=0;i<n;i++)
	{  
        if(dp[i]>l)
            l=dp[i];
    }
    cout<<l;
    return 0;
}
