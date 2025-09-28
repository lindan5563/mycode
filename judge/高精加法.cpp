#include<bits/stdc++.h>
using namespace std;
string a,b,c;
int main()
{
	cin>>a>>b;
	for(int i=a.size()-1;i>=0;i--)
	{
		swap(a[i],a[a.size()-i]);
	}
	for(int i=b.size()-1;i>=0;i--)
	{
		swap(b[i],b[b.size()-i]);
	}
//	cout<<a<<"\n"<<b<<endl;
	for(int i=0;i<max(a.size(),b.size());i++)
	{
		int x=0,y=0;
		if(i<a.size())
		{
			x=a[i]-'0';
		}
		if(i<b.size())
		{
			y=b[i]-'0';
		}
		c[i]=((c[i]+x+y)%10)+'0';
		if(x+y>9)
		{
			c[i+1]=1;
		}
		else
		{
			c[i+1]=0;
		}
//		cout<<c[i];
	}
	for(int i=c.size()-1;i>=0;i--)
	{
		swap(c[i],c[c.size()-i]);
	}
	cout<<c;
	return 0;
}
