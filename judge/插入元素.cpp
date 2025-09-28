#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a;
    int n,m,dex,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&x);
    	a.push_back(x);
    }
    a.push_back(a[0]);
    a.erase(a.begin());
    for(int i=0;i<n;i++)
    	printf("%d ",a[i]);
	return 0;
}
//insert
