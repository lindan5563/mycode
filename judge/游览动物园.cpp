#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
//结构体排序一  ----定义cmp函数
//按姓名从小到大排序，姓名一样，按年龄从小到大排序 
struct student{
    string name; 
    int age;
}; 
bool cmp(student s1,student s2)
{
    if(s1.name==s2.name)
        return s1.age<s2.age;
	else 
    	return s1.name<s2.name;
}
struct student2
{
    string name;
    int age;
    bool operator<(const student2 & s2) const
	{
        if(name==s2.name)
            return age<s2.age;
        else
        	return name<s2.name;        
    }
}; 
int main()
{
    student s[100];
    sort(s,s+3,cmp);
    student2 s2[100]; 
    sort(s2,s2+3);
    return 0;
}
