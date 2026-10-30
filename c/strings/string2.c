#include<stdio.h>
int main()
{
    char name[25];
    printf("Enter your name : ");
    scanf("%[^\n]",name);

    printf("Hello %s\n",name);

}