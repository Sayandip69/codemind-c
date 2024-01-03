#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int totalvol;
    int v1=totalvol/x;
    int v2=totalvol/y;
    int totaltime=totalvol/(v1+v2);
    printf("%d",totaltime);
    return 0;
}