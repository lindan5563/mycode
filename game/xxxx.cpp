#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int h;
 	cin>>h;
 	for(int i=1;i<=h;i++)
 	{
 		for(int k=1;k<=h-i;k++)
 		{
 			cout<<" ";
 		}
 		for(int x=1;x<=i*2-1;x++)
 		{
 			cout<<"*";
 		}
 		cout<<"\n";
 	}
	return 0;
}
