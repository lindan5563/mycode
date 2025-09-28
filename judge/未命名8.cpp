#include<bits/stdc++.h>
using namespace std;
double bds()
{
	string s;
	cin>>s;
	if(s[0]=='+')
	{
		return bds()+bds();
	}
	else if(s[0]=='-')
	{
		return bds()-bds();
	}
	else if(s[0]=='*')
	{
		return bds()*bds();
	}
	else if(s[0]=='/')
	{
		return bds()*bds();
	}
	else
	{
		return atof(s.c_str());
	}
}
int main()
{
	printf("%f\n",bds());
	return 0;
}

