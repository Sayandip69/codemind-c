#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int x=1;
    for(int i=1;i<=a;i++){
        x=1;
        for(int j=1;j<=a;j++){
            printf("%d ",x);
            if(x==1) x=0;
            else x=1;
        }
        printf("
");
    }
}