#include<bits/stdc++.h>
using namespace std;
int n,a[11]={1,2,3,4,5,6,7,8,9,0,0};
char ops[11];
int clt()
{
	int ret=0;
	int cm=a[0];
	char lop='+';
	for(int i=0;i<n-1;i++)
	{
		if(ops[i]==' ') 
		{
            cm=cm*10+a[i+1];
        }
		else
		{
			if(lop=='+')
			{
				ret+=cm;
            }
			else if(lop=='-')
			{
				ret-=cm;
			}
			lop=ops[i];
			cm=a[i+1];
		}
	}
	if(lop=='+')
	{
        ret+=cm;
	}
	else if(lop=='-')
	{
		ret-=cm;
	}
	return ret;
}
void dfs(int x)
{
	if(x==n-1)
	{
		if(clt()==0)
		{
			for(int i=0;i<n-1;i++)
			{
				printf("%d%c",a[i],ops[i]);
			}
			printf("%d\n",a[n-1]);
		}
		return;
	}
	ops[x]=' ';
	dfs(x+1);
	ops[x]='+';
	dfs(x+1);
	ops[x]='-';
	dfs(x+1);
}
int main()
{
	cin>>n;
	dfs(0);
	return 0;
}
