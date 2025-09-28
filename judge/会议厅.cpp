#include<bits/stdc++.h>
using namespace std;
struct node
{
	int st,ed;
};
bool cmp(node x,node y)
{
	return x.st<y.st;
}
node a[10010];
int t[10010];
int n,d=INT_MIN;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].st>>a[i].ed;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
		int sum=a[i].ed-a[i].st;
		for(int j=0;j<i;j++)
		{
			if(a[i].st>=a[j].ed)
			{
				sum=max(sum,t[j]+(a[i].ed-a[i].st));
			}
		}
		t[i]=sum;
		d=max(sum,d);
	}
	/*
	printf("\n%d\n\n",d);
	for(int i=0;i<n;i++)
	{
		printf("%d %d\n",a[i].st,a[i].ed);
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%6d",t[i]);
	}
	printf("\n");
	*/
	cout<<d;
	return 0;
}
