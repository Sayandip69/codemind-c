#include<stdio.h>
int main()
{
    int p,C,b,m,c;
    scanf("%d%d%d%d%d",&p,&C,&b,&m,&c);
    int per=((p+C+b+m+c)/5);
    if (per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }
}