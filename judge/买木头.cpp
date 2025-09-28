#include<bits/stdc++.h>   
using namespace std;
long long n,m,l[1000010],s[1000010];
bool check(long long x)
{      
    long long cnt=0;
    for (int i=0;i<n;i++)
        cnt+=(l[i]/x)*s[i];
    return cnt>=m;
}
int main()
{
    cin.tie(0);
    cin>>n>>m>>l[0]>>s[0];
    for(int i=1;i<n;i++) 
    {
        l[i]=((l[i-1]*37011+10193)%(10000))+1;
        s[i]=((s[i-1]*73011+24793)%(100))+1;
    }
    long long l=1,r=1e18,ans=0;
    while(l<=r)
    {        
        long long mid=(l+r)>>1;
        if (check(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    cout<<ans;
    return 0;
}

