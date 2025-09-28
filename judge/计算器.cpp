#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c;
	char ops;
	cin>>a>>b>>ops;
	switch(ops)
	{
		case'+':
			c=a+b;
			break;
		case'-':
			c=a-b;
			break;
		case'*':
			c=a*b;
			break;
		case'/':
			if(b==0)
			{
				cerr<<"er!";
				return -32767;
			}
			c=a/b;
			break;
		default:
			cerr<<"er!";
			return -32767;
	}
	cout<<c;
	return 0;
}
