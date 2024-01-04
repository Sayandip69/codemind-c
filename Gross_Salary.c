#include<stdio.h>
int main()
{
   float a;
   scanf("%f",&a);
   if(a<=10000)printf("%.2f",a+((a*4)/5)+a/5);
   else if(a>10000 && a<=20000)printf("%.2f",a+((a*9)/10)+a/4);
   else printf("%.2f",a+((a*19)/20)+((a*3)/10));
}