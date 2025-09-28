#include<iostream>
#include<cstdio>
using namespace std;
int a[100010];
long long sum;
int n;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sum=0;
    int mt=a[0];
    for(int i=1;i<n;i++)
	{
        if(a[i]<mt)
		{
            sum+=mt-a[i];
        }
		else
		{
            mt=a[i];
        }
    }
	cout<<sum;
	return 0;
}
