#include<bits/stdc++.h>
using namespace std;
int main()
{
	string t;
	cin>>t;
	stack<char>s;
	for(char c:t)
	{
		if(c=='{'||c=='['||c=='<'||c=='(')
		{
			s.push(c);
		}
		else if(!s.empty()&&((c=='}'&&s.top()=='{')||(c==']'&&s.top()=='[')||(c=='>'&&s.top()=='<')||(c==')'&&s.top()=='(')))
		{
			if(s.empty())
			{
				cout<<"no";
				return 0;
			}
			else
			{
				s.pop();
			}
		}
	}
	if(s.empty())
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}
