#include<stdio.h>
int main()
{
    char name[25];
    int x=0;
    printf("Enter your name : ");
    scanf("%[^\n]",name);
    x=0;
    while(name[x]!='\0')
    {
        x++;
    }
    printf("The length of %s is %d",name,x);

}