#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;


int xy=1;
int zm=0;
string name;
string kong;

void xx()
{
	system("cls");
	if(xy==1)
		cout<<"b�˳���\n������,��ʹ���˻��ԡ���/hu/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;}
	else if(xy==2)
		cout<<"b�˳���\n������,��ʹ���˺󵹡���/ai/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;}
	else if(xy==3)
		cout<<"b�˳���\n������,�����ն��䡣��/ti/;" ;cin>>kong;xy++;system("cls"); if(kong=="b") {return;}
	else if(xy==4)
		cout<<"b�˳���\n*****,��ʹ������������/**/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;}
	else if(xy==5)
		cout<<"b�˳���\n****��,��ʹ���˷ǳ�ʹ�ࡣ��/**/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;}
	else if(xy==6)
		cout<<"b�˳���\n****��,��ʹ��������ָ���/**/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;} 
	else if(xy==7)
		cout<<"b�˳���\n���ҽ���,��ʹ���˵��ڿ��С���/ai/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;}
	else if(xy==8)
		cout<<"b�˳���\nӦ�����,���ҽ��ӽ���䡣��/ai/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;}
		
}
void ll()
{
	
}
int main()
{
    cout<<"���������:";
    cin>>name;
    system("cls");
    do
	{ 
    cout<<"\thello"<<name<<endl;
    cout<<"\t  x.ѧϰ\n\t  l.��ϰ\n";
    cin>>kong;
    if(kong=="x")
    	xx();
    else if(kong=="l")
    	ll();
    else 
    	cout<<"? ? ?";system("cls");
	}
	while(1);
    return 0;
}

