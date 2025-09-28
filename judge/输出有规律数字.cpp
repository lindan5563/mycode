#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=i,c=1;c<=n;c++,j++)
		{
			if(j>n)
				j=1;
			printf("%d ",j);
		}
		printf("\n");
	} 
	return 0;
}
