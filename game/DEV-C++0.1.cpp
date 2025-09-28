/*




*/
#include <conio.h>
#include <windows.h>
#include <iostream> 
#include <time.h>
#include <string.h>
#include <string>
#include <ostream>
#include <ios>
using namespace std;

void bianyiqi();

void kongzhitai();

const long long int NNN=99999999;
int n;
char daima[9999][9999];
string zhiling;
int disx=0;
int disd=19;
int dihx=0;
int dihd=44;

char dcin;
int dcinha;
int dcinli;


int main()
{
	
	kongzhitai();
	return 0;
}

/*void shangxia();
{
	
}*/


void bianyiqi()
{
	system("cls");
	cout<<"\t\t\t\t\t\tDEV-C++ 0.1²âÊÔ°æ"<<endl;
	cout<< "\t\t\t\t\t\t\t±àÒëÆ÷" <<endl;
	for(int i=disx;i<disd;i++) 
	{
		
		for(int j=dihx;j<dihd;j++)
			cout<<daima[i][j];
		cout<<endl;
	}
	
	
	if(cin.get()=='\n')
		dcinli++;
	dcin=_getch();
	daima[dcinli][dcinha]=dcin;
	//dcinli++;
	dcinha++;
	bianyiqi();
}

void kongzhitai()
{
	cout<<"\t\t\t\t\t\tDEV-C++ 0.1²âÊÔ°æ"<<endl;
	cout<< "\t\t\t\t\t\t\t¿ØÖÆÌ¨" <<endl;
	cin>>zhiling;
	
	if(zhiling=="new")
		bianyiqi();
	system("cls");
	kongzhitai();
	
}


