#include<bits/stdc++.h>
using namespace std;
struct node
{
	int va;
	int on;
	int under;
};
int n;
node a[100];
int main()
{
	string cmp;
	while(cin>>cmp)
	{
		if(cmp=="exit")
			return 0;
		else if(cmp=="newint")
		{
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cin>>a[i].va;
				a[i].under=i;
				a[i].on=i;
			}
		}
		else if(cmp=="put")
		{
			int ks,br;
			cin>>ks>>cmp>>br;
			ks-=1,br-=1;
			int next=a[br].on;
			while(a[next].on!=next)
			{
				next=a[next].on;
			}
			a[ks].under=next;
			a[next].on=ks;
		}
		else if(cmp=="look")
		{
			cin>>cmp;
			if(cmp=="at")
			{
				int v;
				cin>>v;
				for(int i=0;i<n;i++)
				{
					if(a[i].va==v)
					{
						v=a[i].on;
						while(a[v].on!=v)
						{
							v=a[v].on;
						}
						cout<<a[v].va<<endl;
						v=a[v].under;
						while(a[v].under!=v)
						{
							cout<<a[v].va<<endl;
							v=a[v].under;
						}
						break;
					}
				}
			}
		}
	}
	return 0;
}
