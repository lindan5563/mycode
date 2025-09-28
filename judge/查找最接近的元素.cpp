#include<bits/stdc++.h>
#include"C:\Users\yy\Desktop\arryËæ»úÉú³É.h"
using namespace std;
int n=100000,m=1000,e,out,x,dex=0;
int a[100100],f[10100];
int main()
{
	/*
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",f+i);
	}
	*/
	makearry(a,100000,0,1000000000);
	makearry(f,10000,0,1000000000);
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			e=f[dex]-a[i];
			if(e<x&&e>=0||i==0)
			{
				x=e;
				out=a[i];
			}
		}
		cout<<out<<endl;
		dex++; 
	}
	return 0;
}
