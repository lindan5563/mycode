#include<bits/stdc++.h>
using namespace std;
int a[100003];
int t[1000000];
int n,ans=INT_MIN;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	t[a[1]]=t[a[2]]=1;
	int l=1,r=2,df=a[2],sa=a[1];
	while(l<=r&&r<=n)
	{
//		cout<<l<<" "<<r<<endl;
		r++;
		while(t[a[r]]!=0&&r<=n)
		{
			t[a[r]]++;
			r++;
		}
		r--;
//		cout<<l<<" "<<r<<endl;
		ans=max({ans,r-l+1-t[df],r-l+1-t[sa]});
		r++;
		t[a[r]]++;
		int e=a[l];
		t[a[l]]=0;
		while(a[l]==e&&l<=r)
		{
			l++;
		}
//		cout<<l<<" "<<r<<endl;
		sa=df;
		df=a[r];
	}
	cout<<ans;
	return 0;
}
