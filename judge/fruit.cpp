#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,sj[10000],help;
	cin>>r;
	for(int w=0;w<r;w++)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>sj[i];
		}
		for(int i=0;i<n;i++)
		{
			if(sj[i]==sj[i+1]&&n-i>2)
				swap(sj[i+1],sj[i+2]);
			if(sj[i]==sj[i+1]&&i>2)
				swap(sj[i-1],sj[i-2]);
		}
		bool tg=true;
		for(int i=0;i<n-1;i++)
		{
			if(sj[i]==sj[i+1])
				tg=false;
		}
		if(tg)
		{
			cout<<"Y"<<endl;
		}
		else
		{
			cout<<"N"<<endl;
		}
	}
	return 0;
}
/*
2
6
1 2 4 2 2 4
5
1 1 1 2 1
*/
