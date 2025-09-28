#include<bits/stdc++.h>
using namespace std;
string a,b;

int main()
{
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]>='0'&&a[i]<='9'&&b[i]>='a'&&b[i]<='z')
		{
			char bx=b[i];
			for(int j=0;j<a.size();j++)
			{
				if(b[j]==bx)
					b[j]=a[i];
			}
			for(int j=0;j<b.size();j++)
			{
				if(a[j]==bx)
					a[j]=a[i];
			}
			i=0;
		}
		if(b[i]>='0'&&b[i]<='9'&&a[i]>='a'&&a[i]<='z')
		{
			char bx=a[i];
			for(int j=0;j<a.size();j++)
			{
				if(a[j]==bx)
					a[j]=b[i];
			}
			for(int j=0;j<b.size();j++)
			{
				if(b[j]==bx)
					b[j]=b[i];
			}
			i=0;
		}
	}
	cout<<a<<endl<<b;
	return 0;
}
