#include<bits/stdc++.h>
using namespace std;
int main()
{
	string t;
	stack<int>s;
	while(cin>>t)
	{
		if(t[0]>='0'&&t[0]<='9')
		{
			s.push(atoi(t.c_str()));
		}
		else if(t[0]=='+')
		{
			int a=s.top();
			s.pop();
			int b=s.top();
			s.pop();
			s.push(b+a);
		}
		else if(t[0]=='-')
		{
			int a=s.top();
			s.pop();
			int b=s.top();
			s.pop();
			s.push(b-a);
		}
		else if(t[0]=='*')
		{
			int a=s.top();
			s.pop();
			int b=s.top();
			s.pop();
			s.push(b*a);
		}
		else if(t[0]=='/')
		{
			int a=s.top();
			s.pop();
			int b=s.top();
			s.pop();
			s.push(b/a);
		}
	}
	cout<<s.top();
	return 0;
}
