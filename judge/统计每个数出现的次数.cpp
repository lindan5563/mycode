#include<bits/stdc++.h>
using namespace std;
map<long long,int>arr;
int main()
{
    int c=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        long long x;
        cin>>x;
        arr[x]++;
    }
    map<long long,int>::iterator it;
    for(it=arr.begin();it!=arr.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
	return 0;
}
