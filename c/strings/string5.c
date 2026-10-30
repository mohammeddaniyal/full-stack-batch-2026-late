#include<stdio.h>
int main()
{
    char name[25];
    char temp[25];
    int x=0;
    printf("Enter your name : ");
    scanf("%[^\n]",name);
    x=0;
    printf("Before copying %s\n",temp);
    while(name[x]!='\0')
    {
        temp[x]=name[x];
        x++;
    }
    temp[x]='\0';
    printf("after %s\n",temp);

}