#include<stdio.h>
#include<string.h>
int main()
{
    char name[25];
    char temp[25];
    printf("Enter your name : ");
    scanf("%[^\n]",name);
    printf("Before copying %s\n",temp);
    
    strcpy(temp,name);
    
    printf("after %s\n",temp);

}