#include<bits/stdc++.h>
using namespace std;
bool a[4],flag;
string s;
int t;
void p()
{
	for(int i=0;i<4;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>s;
		flag=1;
		memset(a,1,sizeof(a));
		for(char c:s)
		{
			if(c>='2'&&c<='9')
			{
				a[0]=0;
			}
			if(c=='8'||c=='9')
			{
				a[1]=0;
			}
			if(c>='A'&&c<='F')
			{
				a[0]=a[1]=a[2]=0;
				a[3]=1;
				p();
				flag=0;
				break;
			}
			if(c>='G'&&c<='Z')
			{
				a[0]=a[1]=a[2]=a[3]=0;
				p();
				flag=0;
				break;
			}
		}
		if(flag)
			p();
	}
	return 0;
}
