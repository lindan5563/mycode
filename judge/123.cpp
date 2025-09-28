#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch;
	stack<char>s;
	while(1)
	{
		while(1)
		{
			cin.get(ch);
			if(ch=='\n')
			{
				stack<char>out;
				while(!s.empty())
				{
					out.push(s.top());
					s.pop();
				}
				while(!out.empty())
				{
					cout<<out.top();
					out.pop();
				}
				break;
			}
			else if(ch=='#')
			{
				if(s.empty())
				{
					cerr<<"worng!";
					return 36767;
				}
				else
					s.pop();
			}
			else if(ch=='@')
			{
				if(s.empty())
				{
					cerr<<"worng!";
					return 36767;
				}
				else
				{
					while(!s.empty())
					{
						s.pop();
					}
				}
			}
			else
			{
				s.push(ch);
			}
		}
	}
	return 0;
}
