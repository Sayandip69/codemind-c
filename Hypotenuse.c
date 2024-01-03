#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    float c;
    c=sqrt((a*a)+(b*b));
    printf("%.2f",c);
    return 0;
}