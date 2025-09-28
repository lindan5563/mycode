#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=1;i<=100;i++)
	{
		for(int j=1;j<=100-i;j++)
		{
			int k=m-i-j;
			if(k%3==0&&i*5+j*3+k/5==100)
				printf("%d %d %d\n",i,j,k);
		}
	}
	return 0;
}
