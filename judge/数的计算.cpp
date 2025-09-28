#include<bits/stdc++.h>
using namespace std;
int cnt;
void fj(string n)
{
	for(int i=1;i<=(n[0]-48)/2;i++)
	{
		fj(char(i+48)+n);
		cnt++;
	}
}
int main()
{
	string n;
	cin>>n;
	fj(n); 
	cout<<cnt+1;
	return 0;
}
