#include<bits/stdc++.h>
using namespace std;
struct node
{
    int id;
    string name;
    double score[3];
    double aver;
}a[110];
bool cmp(node x,node y)
{
    return x.aver > y.aver;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i].id);
        char temp[20]; 
        scanf("%s", temp);
        a[i].name=temp;
        scanf("%lf%lf%lf",&a[i].score[0],&a[i].score[1],&a[i].score[2]);
        a[i].aver=(a[i].score[0]+a[i].score[1]+a[i].score[2])/3;
    }
    for(int i=0;i<n;i++)
    {
        printf("%.2f ",a[i].aver);
	}
    sort(a,a+n,cmp);
    printf("\n%d %s %.1f %.1f %.1f %.2f",a[0].id,a[0].name.c_str(),a[0].score[0],a[0].score[1],a[0].score[2],a[0].aver);
    return 0;
}

