#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    int n,m,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&x);
    	a.push_back(x);
    }
    cin>>m;
    a.erase(a.begin()+m-1);
    for(int i=0;i<n-1;i++)
    	printf("%d ",a[i]);
    return 0;
}
//erase()
