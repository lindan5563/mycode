#include<bits/stdc++.h>
#define iwe(s,e,number,pdh) lower_bound(s,e,number,pdh)
using namespace std;
vector<int>b;
int a[1010],n,cnt;
int main()
{
	while(cin>>a[n])
	{
		n++;
    }
    for(int i=0;i<n;i++)
	{
        auto it=iwe(b.begin(),b.end(),a[i],greater<int>());
        if(it==b.end())
		{
			b.push_back(a[i]);
			cnt++;
        }
		else
		{
            *it=a[i];
        }
    }
    cout<<cnt;
    return 0;
}
