#include<bits/stdc++.h>
using namespace std;
float w[23],v[23];
int path[23];
int apath[23];
float ans,m;
int n,cnt,acnt;
void dfs(int i,float x,float j)
{
	if(i==n||x==0)
	{
		if(j>ans)
		{
			ans=j;
			for(int i=0;i<cnt;i++)
			{
				apath[i]=path[i];
			}
			acnt=cnt;
		}
		return; 
	}
	dfs(i+1,x,j);
	if(x-w[i]>=0)
	{
		path[cnt]=i+1;
		cnt++;
		dfs(i+1,x-w[i],j+v[i]);
		cnt--;
	}
}
int main()
{
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%f%f",&w[i],&v[i]);
	}
	dfs(0,m,0);
	cout<<int(ans)<<endl;
	for(int i=0;i<acnt;i++)
	{
		printf("%d ",apath[i]);
	}
	return 0;
}
