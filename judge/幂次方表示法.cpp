#include<bits/stdc++.h>
using namespace std;
int a[30];
void txr(int n)
{
	if(n==0)
	{
		cout<<"0";
		return;
	}
	while(n!=0)
	{
		int i=0;
		while(1)
		{
			if(a[i]<=n&&a[i+1]>n)
			{
				if(a[i]==n)
				{
					if(i==1)
						cout<<"2";
					else
					{
						cout<<"2(";
						txr(i);
						cout<<")";
					}
					return;
				}
				if(i==1)
					cout<<"2+";
				else
				{
					cout<<"2(";
					txr(i);
					cout<<")+";
				}
				n-=a[i];
				break;
			}
			i++;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	a[0]=1;
	for(int i=1;i<30;i++)
		a[i]=a[i-1]*2;
	txr(n);
	cin>>n;
	return 0;
}
