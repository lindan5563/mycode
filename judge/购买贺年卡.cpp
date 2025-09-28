#include<bits/stdc++.h>
using namespace std;
struct node
{
	int yuan;
    int has;
}a[1010];
bool cmp(node x,node y)
{
	if(x.yuan!=y.yuan)
		return x.yuan<y.yuan;
	else
		return x.has>y.has;
}
int main()
{
    int n,m,cnt=0,yu=0;
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
    	scanf("%d%d",&a[i].yuan,&a[i].has);
    }
    sort(a,a+n,cmp);
    for(int dex=0;dex<n;dex++)
    {
    	for(int i=0;i<a[dex].has&&cnt<m;i++)
    	{
    		yu+=a[dex].yuan;
    		cnt++;
    	}
    }
    cout<<yu;
}
