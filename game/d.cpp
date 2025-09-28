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
		cout<<"b退出。\n昏迷咒,可使敌人昏迷。按/hu/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;}
	else if(xy==2)
		cout<<"b退出。\n防碍咒,可使敌人后倒。按/ai/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;}
	else if(xy==3)
		cout<<"b退出。\n铁甲咒,可吸收恶咒。按/ti/;" ;cin>>kong;xy++;system("cls"); if(kong=="b") {return;}
	else if(xy==4)
		cout<<"b退出。\n*****,可使敌人死亡。按/**/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;}
	else if(xy==5)
		cout<<"b退出。\n****咒,可使敌人非常痛苦。按/**/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;}
	else if(xy==6)
		cout<<"b退出。\n****咒,可使敌人听你指令。按/**/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;} 
	else if(xy==7)
		cout<<"b退出。\n倒挂金钟,可使敌人吊在空中。按/ai/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;}
	else if(xy==8)
		cout<<"b退出。\n应声落地,倒挂金钟解除咒。按/ai/;" ;cin>>kong;xy++;system("cls");if(kong=="b"){return;}
		
}
void ll()
{
	
}
int main()
{
    cout<<"你的名字是:";
    cin>>name;
    system("cls");
    do
	{ 
    cout<<"\thello"<<name<<endl;
    cout<<"\t  x.学习\n\t  l.练习\n";
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

