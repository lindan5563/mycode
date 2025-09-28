#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,j;
	cin>>t>>j;
	for(int a=0;a<t;a++)
	{
		int b=t-a;
		if(a*2+b*4==j)
		{
			printf("%d %d\n",a,b);
		}
	}
	return 0;
}
