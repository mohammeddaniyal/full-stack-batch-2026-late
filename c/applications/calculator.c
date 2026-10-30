#include<stdio.h>
// stdio -> standard input output 
int main()
{
    int a,b;
    int vishmita;
    int diff;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter another number : ");
    scanf("%d",&b);
    vishmita=a+b;
    printf("The sum of two number is %d\n",vishmita);

    printf("Enter two number for difference : ");
    scanf("%d %d",&a,&b);
    diff=a-b;
    printf("The difference of %d-%d=%d",a,b,diff);
    return 0;
}
