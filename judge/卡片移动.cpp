#include<bits/stdc++.h>
using namespace std;
struct node
{
    int x,y;
    int noc;
    int orderx,ordery;
};
node a[100010];
bool cmp1(node aa,node bb)
{
    return aa.x<bb.x;
}
bool cmp2(node aa,node bb)
{
    return aa.y<bb.y;
}
bool cmp3(node aa,node bb)
{
    return aa.noc<bb.noc;
}
int h,w,c,t;
int main()
{
    cin>>h>>w>>c;
    for(int i=1;i<=c;i++)
    {
        scanf("%d %d",&a[i].x,&a[i].y);
        a[i].noc=i;
    }
    sort(a+1,a+1+c,cmp1);
    t=0;
    a[1].orderx=1;
    for(int i=2;i<=c;i++)
    {
        if(a[i].x==a[i-1].x)
            t++;
        a[i].orderx=i-t;
    }
    sort(a+1,a+1+c,cmp2);
    t=0;
    a[1].ordery=1;
    for(int i=2;i<=c;i++)
    {
        if(a[i].y==a[i-1].y)
            t++;
        a[i].ordery=i-t;
    }
    sort(a+1,a+1+c,cmp3);
    t=0;
    for(int i=1;i<=c;i++)
    {
        printf("%d %d\n",a[i].orderx,a[i].ordery);
    }
    return 0;
}
