#include <iostream>
using namespace std;
void myswap(int *q1,int *q2)
{
	int temp;
	temp=*q1;
	*q1=*q2;
	*q2=temp;
	return;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int *q1,*q2;
	q1=&a;
	q2=&b;
	myswap(q1,q2);
	cout<<a<<" "<<b;
	return 0;
}

