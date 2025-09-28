#include<bits/stdc++.h> 
using namespace std;

long double a,b;
char jzc;

int main()
{
	while(1)
	{
		cin>>a>>jzc>>b;
		switch(jzc)
		{
			case '+':
				cout<<a+b<<endl; break;
			case '-':
				cout<<a-b<<endl; break;
			case '*':
				cout<<a*b<<endl; break;
			case '/':
				if(b==0) {cout<<"´íÎó"<<endl; break;}
				else {cout<<a/b; break;}
			default:
				cout<<"´íÎó"<<endl;break;
		}

	}
	return 0;
}

