#include<bits/stdc++.h>
using namespace std;
struct node
{
	int s,e;
};
bool cmp(node x,node y)
{
	return x.s<y.s;
}
node a[5010];
int b[5010]; 
int n,ans;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].s>>a[i].e;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
		int best=1;
		for(int j=0;j<i;j++)
		{
			if(best<=b[j]&&a[i].e>a[j].e)
			{
				best=b[j]+1;
			}
		}
		b[i]=best;
		if(best>ans)
		{
			ans=best;
		}
	}
	cout<<ans;
	return 0;
}
