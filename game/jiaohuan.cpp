#include<bits/stdc++.h>
using namespace std;
int main()
{
	int aij=0;
	int bij=0;
	int ai=0;
	int bi=0;
	int *a;
	int *b;
	int *i;
	int v1[5];
	int v2[5];
	a=&v1[0];
	b=&v2[0];
	while(ai<5)
	{
		cin>>(*a);
		a++;
		ai++;
	}
	while(bi<5)
	{
		cin>>(*b);
		b++;
		bi++;
	}
	a=&v1[0];
	b=&v2[0];
	while(aij<5&&bij<5)
	{
		i=&(*a);
		(*a)=&(*b);
		(*b)=&i;
		a++;
		b++;
		aij++;
		bij++;
	}
	for(int i=0;i<5;i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<v2[i]<<" ";
	}
	return 0;
}

