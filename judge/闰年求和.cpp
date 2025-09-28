#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,sum=0;
	cin>>x>>y;
	for(int i=x+1;i<=y;i++)
	{
		if((i%4==0&&i%100!=0)||i%400==0)
			sum+=i;
	}
	cout<<sum;
	return 0;
}
