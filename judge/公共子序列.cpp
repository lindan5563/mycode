#include<bits/stdc++.h>
using namespace std;
struct node
{
	int n;
	vector<int>a;
};
node jl[500][500];
int alen,blen;
pair<int,pair<int,int>>ans;
int a[500],b[500];
int dfs(int i,int j)
{
	if(i==alen||j==blen)
	{
		return 0;
	}
	if(jl[i][j].n!=0)
	{
		return jl[i][j].n;
	}
	int ret=INT_MIN;
	if(a[i]==b[j])
	{
		ret=dfs(i+1,j+1)+1;
	}
	ret=max({ret,dfs(i+1,j),dfs(i,j+1)});
	jl[i][j].n=ret;
	if(jl[i+1][j+1].n+1==jl[i][j].n&&a[i]==b[j])
	{
		jl[i][j].a.emplace_back(a[i]);
	}
	if(ret>ans.first);
	{
		ans.first=ret;
		ans.second.first=i;
		ans.second.second=j;
	}
	return ret;
}
int main()
{
	cin>>alen;
	for(int i=0;i<alen;i++)
	{
		scanf("%d",a+i);
	}
	cin>>blen;
	for(int i=0;i<blen;i++)
	{
		scanf("%d",b+i);
	}
	cout<<dfs(0,0)<<endl;
	for(int i=0;i<jl[ans.second.first][ans.second.second].n;i++)
	{
		printf("%d ",jl[ans.second.first][ans.second.second].a[i]);
	}
//	for(int i=0;i<alen;i++)
//	{
//		for(int j=0;j<blen;j++)
//		{
//			printf("%d ",jl[i][j]);
//			jl[i][j]=0;
//			b[i]=0;
//		}
//		a[i]=0;
//		printf("\n");
//	}
	return 0;
}
