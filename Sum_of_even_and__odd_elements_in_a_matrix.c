#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
         scanf("%d",&arr[i][j]);   
        }
    }
    int e=0,o=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
          if(arr[i][j]%2==0) e+=arr[i][j];
          else o+=arr[i][j];
        }
    }
    printf("%d %d",e,o);
}