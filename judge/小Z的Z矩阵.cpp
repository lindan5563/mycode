#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<string(n,'Z')<<endl;
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i+j==n)
				cout<<'Z';
			else
				cout<<'-';
		}
		cout<<endl;
	}
	cout<<string(n,'Z')<<endl;
	return 0;
}
