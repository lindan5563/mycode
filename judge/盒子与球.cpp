#include<bits/stdc++.h>
using namespace std;
struct node
{
	int l,r;
};
bool cmp(node x,node y)
{
	if(x.l==y.r)
	{
		return x.r<y.r;
	}
	else
	{
		return x.l<y.l;
	}
}
node a[200000];
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&a[i].l,&a[i].r);
			if(a[i].l>a[i].r)
			{
				swap(a[i].l,a[i].r);
			}
		}
		sort(a,a+n,cmp);
		int r=0;
		bool flag=1;
		for(int i=0;i<n;i++)
		{
			printf("%d %d\n",a[i].l,a[i].r);
			if(a[i].l>r)
			{
				r=a[i].l;
			}
			else if(a[i].r>r)
			{
				r=r+1;
			}
			else
			{
				flag=0;
				printf("No\n");
				break;
			}
		}
		if(flag)
		{
			printf("Yes\n");
		}
	}
	return 0;
}
