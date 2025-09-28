#include<bits/stdc++.h>
using namespace std;
long long n,st;
string s; 
int main()
{
	cin>>n>>st>>s;
	for(long long i=0;i<n;i++)
	{
		if(s[i]=='U')
		{
			st=st/2;
		}
		else if(s[i]=='L')
		{
			st=st*2;
		}
		else
		{
			st=st*2+1;
		}
	}
	cout<<st;
	return 0;
}
