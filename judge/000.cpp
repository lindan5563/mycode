#include<bits/stdc++.h>
using namespace std;
int n;
double cnt;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cnt+=1.0/i;
	}
	printf("%.3lf",cnt);
    return 0;
}
