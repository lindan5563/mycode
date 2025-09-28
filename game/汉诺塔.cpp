#include<bits/stdc++.h>
#include<windows.h>
#define kd(vKey)((GetAsyncKeyState(vKey)&0x8000)?1:0)
using namespace std;
int tap[3][5];
int at,bt,ct;
char in()
{
	while(1)
	{
		for(int i=0x41;i<=0x5A;i++)
		{
			if(kd(i))
			{
				return char(i);
			}
		}
	}
}
void intn()
{
	for(int i=0,cnt=5;i<5&&cnt>=1;cnt--,i++)
		tap[0][i]=cnt;
	at=5;
}
bool move(char s,char o)
{
	if(s=='A')
	{
		if(o=='B'&&tap[0][at-1]<tap[1][bt-1]||bt==0)
		{
			tap[1][bt]=tap[0][at-1];
			at--;
			bt++;
			return 1;
		}
		else if(o=='C'&&tap[0][at-1]<tap[2][ct-1]||ct==0)
		{
			tap[2][ct]=tap[0][at-1];
			at--;
			ct++;
			return 1;
		}
	}
	else if(s=='B')
	{
		if(o=='A'&&tap[1][bt-1]<tap[0][at-1]||at==0)
		{
			tap[0][at]=tap[1][bt-1];
			at++;
			bt--;
			return 1;
		}
		else if(o=='C'&&tap[1][bt-1]<tap[2][ct-1]||ct==0)
		{
			tap[2][ct]=tap[1][bt-1];
			ct++;
			bt--;
			return 1;
		}
	}
	else if(s=='C')
	{
		if(o=='A'&&tap[2][ct-1]<tap[0][at-1]||at==0)
		{
			tap[0][at]=tap[2][ct-1];
			at++;
			ct--;
			return 1;
		}
		else if(o=='B'&&tap[2][ct-1]<tap[1][bt-1]||bt==0)
		{
			tap[1][bt]=tap[2][ct-1];
			bt++;
			ct--;
			return 1;
		}
	}
	return 0;
}
void print(string s)
{
	system("cls");
	if(s!="tap")
	{
		cout<<s;
		return;
	}
	
	int e;
	for(int i=5;i>=0;i--)
	{
		for(int j=0;j<3;j++)
		{
			if(j==0)
				e=at;
			else if(j==1)
				e=bt;
			else
				e=ct;
			if(e>i)
			{
				if(tap[j][i]==1)
					cout<<"    -     ";
				else if(tap[j][i]==2)
					cout<<"   ---    ";
				else if(tap[j][i]==3)
					cout<<"  -----   ";
				else if(tap[j][i]==4)
					cout<<" -------  ";
				else if(tap[j][i]==5)
					cout<<"--------- ";
			}
			else
			{
				cout<<"    |     ";
			}
		}
		cout<<endl;
	}
	//number node
	for(int i=4;i>=0;i--)
	{
		for(int j=0;j<3;j++)
		{
			cout<<tap[j][i]<<" "; 
		}
		cout<<endl;
	}
	cout<<"\n"<<at<<" "<<bt<<" "<<ct<<endl;
	return;
}
void dfs(int n,char wz1,char wz2,char wz3) 
{
	if(n==1)
	{
		printf("%c->%c\n",wz1,wz3);
	}
	else
	{
		dfs(n-1,wz1,wz3,wz2);
		printf("%c->%c\n",wz1,wz3);
		dfs(n-1,wz2,wz1,wz3);
	}
}
int main()
{
	intn();
	char s,o;
	while(true)
	{
		print("tap");
		s=in();
		if(s=='H')
		{
			cout<<"help:\n";
			dfs(5,'A','B','C');
			system("pause");
		}
		else
		{
			cout<<s<<"->";
			Sleep(250);
			o=in();
			cout<<o;
			Sleep(250);
			if(!move(s,o))
			{
				print("error!\n");
				Sleep(1000);
			}
		}
	}
	return 0;
}
