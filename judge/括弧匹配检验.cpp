#include<bits/stdc++.h>
using namespace std;
map<char,int>m;
bool hf(char t, char c)
{
    return m[t]>=m[c];
}
bool pd(string S)
{
    stack<char>s;
    for(char c:S)
	{
        if(c=='<'||c=='('||c=='['||c=='{')
		{
            if(!s.empty()&&!hf(s.top(),c))
			{
                return false;
            }
            s.push(c);
        }
		else
		{
            if (s.empty())
			{
                return false;
            }
            if((c=='>'&&s.top()=='<')||
               (c==')'&&s.top()=='(')||
               (c==']'&&s.top()=='[')||
               (c=='}'&&s.top()=='{'))
			{
                s.pop();
            }
			else
			{
                return false;
            }
        }
    }
    return s.empty();
}
int main() 
{
    m['<']=0;
    m['(']=1;
    m['[']=2;
    m['{']=3;
    int t;
    string s;
    cin>>t;
    while(t--)
	{
        cin>>s;
        if(pd(s))
		{
            cout<<"YES\n";
        }
		else
		{
            cout<<"NO\n";
        }
    }
    return 0;
}
