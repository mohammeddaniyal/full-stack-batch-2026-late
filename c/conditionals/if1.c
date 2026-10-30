#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if(age<10)
        printf("Child\n"); 
    else if(age<18)
        printf("Teen\n");
    else if(age<45)
        printf("Adult\n");
    else if(age<75)
        printf("Old\n");
    else
        printf("Senior citizen\n");
    return 0;
}
