#include<bits/stdc++.h>
using namespace std;
double hl(double a,double b,double c)
{
	double p=(a+b+c)/2.0;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
double a[7];
int main()
{
	for(int i=0;i<7;i++)
	{
		scanf("%lf",&a[i]);
	}
	printf("%lf",hl(a[0],a[1],a[2])+hl(a[2],a[3],a[4])+hl(a[4],a[5],a[6]));
	return 0;
}
