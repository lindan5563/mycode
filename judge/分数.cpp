#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char ch;
	cin>>n;
	switch(n/10)
	{
		case 10:
		case 9:
			{
				ch='A';
				break;
			}
		case 8:
			{
				ch='B';
				break;
			}
		case 7:
			{
				ch='C';
				break;
			}
		case 6:
			{
				ch='D';
				break;
			}
		default:
			{
				ch='E';
				break;
			}
	}
	cout<<ch;
	return 0;
}
