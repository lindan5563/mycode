#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int r=2;
    for(int i=2;i<=n;i++)
        r+=(i-1)*2;
    cout<<r; 
	return 0;
}
