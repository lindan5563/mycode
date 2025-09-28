#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int>s;
	int n,e,m=8;
	cin>>n;
	s.push(n);
	while(1)
	{
		e=s.top();
		if(e!=0)
			s.push(e/m);
		else
		{
			s.pop();
			break;
		}
	}
	while(!s.empty())
	{
		cout<<s.top()%m;
		s.pop();
	}
	return 0;
}
