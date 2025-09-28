#include<bits/stdc++.h>
using namespace std;
bool a[1000000000]; 
int main()
{
	freopen("text.out","w",stdout); 
	for(int i=2;i<1000000000;i++)
	{
		if(a[i]==0)
		{
			printf("%d\n",i);
			for(int j=i*2;j<1000000000;j+=i)
			{
				a[j]=1;
			}
		}
	}
	return 0;
}
