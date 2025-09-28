#include<bits/stdc++.h>
using namespace std;
int main()
{
	int dl,xl,nb,ex;
	dl=xl=nb=ex=0;
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
			dl++;
		else if(s[i]>='a'&&s[i]<='z')
			xl++;
		else if(s[i]>='0'&&s[i]<='9')
			nb++;
		else
			ex++;
	}
	cout<<dl<<" "<<xl<<" "<<nb<<" "<<ex<<endl;
	return 0;
}
