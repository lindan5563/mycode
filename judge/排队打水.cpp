#include<bits/stdc++.h>
using namespace std;
struct node
{
	int t,i;
};
bool cmp(node x,node y)
{
	if(x.t!=y.t)
	{
		return x.t<y.t;
	}
	else
	{
		return x.i<y.i;
	}
}
node a[1000];
int qjh[1000];
int n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].t;
		a[i].i=i+1;
	}
	sort(a,a+n,cmp);
	int sum=0;
	qjh[0]=a[0].t;
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i].i);
		if(i!=0)
		{
			qjh[i]=qjh[i-1]+a[i].t;
		}
		sum+=qjh[i];
	}
	printf("\n%.2lf",1.0*sum/n);
	return 0;
}
