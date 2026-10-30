#include<stdio.h>
int main()
{
    int a,b;
    int result;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter another number : ");
    scanf("%d",&b);
    printf("The user input with a=>%d and b=>%d",a,b);
    result=a+b;
    printf("The sum is %d",result);
 
}