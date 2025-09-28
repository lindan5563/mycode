#include<bits/stdc++.h>
using namespace std;
struct node
{
	int n;
	int l;
	int r;
};
node* a=new node[100000];
int n,k;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d",&a[i].n,&a[i].l,&a[i].r);
		if(a[i].n==k)
		{
			cout<<i;
			break;
		}
	}
	
	return 0;
}
