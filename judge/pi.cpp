#include<bits/stdc++.h>
using namespace std;
int n;
double s=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) 
	{
		s+=1.0/(i*1.0 * i*1.0);
	}
	s*=6;
	printf("%.6lf",sqrt(s));
}
