#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=a+b;
    y=c+d;
    if(x>y)
    {
        printf("%d",y);
    }
    else
    {
        printf("%d",x);
    }
}