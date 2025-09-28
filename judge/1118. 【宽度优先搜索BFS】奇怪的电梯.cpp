#include<bits/stdc++.h>
using namespace std;  
int n,a,b;  
int s[201],v[201];  
int main()  
{
	freopen("lift.in","r",stdin);
	freopen("lift.out","w",stdout);
    scanf("%d%d%d",&n,&a,&b);  
    for(int i=1;i<=n;i++)  
        scanf("%d",s+i);  
    s[0]=s[n+1]=0;
    int x;
    queue<int>q;  
    q.push(a);  
    v[a]=1;  
    int cnt=0;  
    while(!q.empty())  
    {  
        int c=q.size();  
        while(c--)  
        {  
            int e=q.front();  
            q.pop();  
            if(e==b)  
            {  
                printf("%d\n",cnt);  
                return 0;  
            }  
            x=e+s[e];
            if(x<=n&&!v[x])
            {  
                v[x]=1;  
                q.push(x);
            }
            x=e-s[e];
            if(x>=1&&!v[x])  
            {  
                v[x]=1;  
                q.push(x);  
            }
        }  
        cnt++;  
    }
    printf("-1\n");
    return 0;  
}
