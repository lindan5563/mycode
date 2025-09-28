#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int e=n%10+n/100+n/10%10;
	cout<<e<<endl;
	cout<<e*e<<endl;
	cout<<e*e*e<<endl;
	return 0;
}
