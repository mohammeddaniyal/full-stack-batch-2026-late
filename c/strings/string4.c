#include<stdio.h>
#include<string.h>
int main()
{
    char name[25];
    char nm2[25];
    int len;
    printf("Enter your name : ");
    scanf("%[^\n]",name);
    len=strlen(name);
   printf("The length of %s is %d",name,len);

}