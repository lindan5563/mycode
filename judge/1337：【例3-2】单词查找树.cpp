#include<bits/stdc++.h>
using namespace std;
struct node
{
	char c;
	int cnt;
	int* next=new int[60];
};
node* a=new node[50000];
int cnt=1;
string s;
int main()
{
	while(cin>>s)
	{
		int bf=0;
		bool find;
		for(int i=0;i<s.size();i++)
		{
			find=0;
			for(int j=0;j<a[bf].cnt;j++)
			{
				if(a[a[bf].next[j]].c==s[i])
				{
					bf=a[bf].next[j];
					find=1;
					break;
				}
			}
			if(find==0)
			{
				a[cnt].c=s[i];
				a[bf].next[a[bf].cnt]=cnt;
				a[bf].cnt++;
				bf=cnt;
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
