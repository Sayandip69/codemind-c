#include<stdio.h>
#include<string.h>

int main()
{
    char ch[50];
    scanf("%[^
]s",ch);
    printf("%d",strlen(ch));
}