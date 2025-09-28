#include<bits/stdc++.h>
using namespace std;
string s,p;
int n,m,k,d=INT_MIN,cnt;
int main()
{
	cin>>n>>m>>k;
	char c;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>c;
			p+=c;
		}
		if(i==k)
			s=p;
	}
	for(int i=0;i<m;i++)
	{
		if(s[i]=='0')
			cnt=0;
		else
		{
			cnt++;
			d=max(d,cnt);
			
		}
	}
	cout<<d;
	return 0;
}
