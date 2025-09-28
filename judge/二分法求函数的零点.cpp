#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return pow(x,5)-15*pow(x,4)+85*pow(x,3)-225*pow(x,2)+274*x-121;
}
int main()
{
	bool so=1;
	double z=1.5,y=2.4,mid;
	while(y-z>=0.01)
	{
		mid=(z+y)/2;
		if(f(mid)==0)
		{
			int so=0;
			cout<<fixed<<setprecision(6)<<mid<<endl;
			break;
		}
   		if(f(mid)*f(z)<0)
      		y=mid;
  		else
      		z=mid;  
	}
	if(so)
    	cout<<fixed<<setprecision(6)<<y<<endl;
	return 0;
}
