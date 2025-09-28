#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int cnt=0;
	cin>>s;
	for(char c:s)
	{
		if(c=='1')
			cnt++;
	}
	cout<<cnt;
	return 0;
}
