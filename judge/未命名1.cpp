#include<iostream>
#include<string>
using namespace std;
int n,m,f[1001],enm[1001];
int find(int x)
{
    while(f[x]!=x)
	{
		x=f[x];
	}
    return x;
}
void hebing(int x,int y)
{
    x=find(x);y=find(y);
    if(x==y)
	{
		return;
	}
    f[y]=x;
    return;
}
int main()
{	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		f[i]=i;
	for(int i=1;i<=m;i++)
	{
		int p,q;
		bool c;
		cin>>c>>p>>q;
		if(c==0)
		{
			hebing(p,q);
		}
		else 
		{
            if(enm[p]==0)
            {
				enm[p]=find(q);
			}
            else
			{
				hebing(q,enm[p]);
			}
            if(enm[q]==0)
			{
				enm[q]=find(p);
			}
            else
			{
				hebing(p,enm[q]);
			}
        } 
    }
    int count[1001]={0};
    for(int i=1;i<=n;i++)
        count[find(i)]++;
    int cnt=0;
    for(int i=1;i<=n;i++)
        if(count[i])
			cnt++;
    cout<<cnt;
 }
