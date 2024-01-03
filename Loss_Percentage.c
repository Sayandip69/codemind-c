#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    float loss=x-y;
    float lp=(loss*100)/x;
    printf("%.2f",lp);
    return 0;
}