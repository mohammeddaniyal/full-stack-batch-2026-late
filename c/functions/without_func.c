#include<stdio.h>
int main()
{
    int x,y;
    int sum;
    int diff;
    int product;
    int div;
    // this is the code for accepting two number and computing there sum
    printf("Enter two number (add) : ");
    scanf("%d %d",&x,&y);
    sum=x+y;

    printf("The sum of two numbers is %d\n",sum);

    // this is the code for accepting two numbers and computing there difference
    printf("Enter two number (sub): ");
    scanf("%d %d",&x,&y);
    diff=x-y;

    printf("The difference of two numbers is %d\n",diff);

    // this is the code for accepting two numbers and computing there product
    printf("Enter two number (mul): ");
    scanf("%d %d",&x,&y);
    product=x*y;

    printf("The product of two numbers is %d\n",product);

    // this is the code for accepting two numbers and computing there division
    printf("Enter two number (div): ");
    scanf("%d %d",&x,&y);
    div=x/y;

    printf("The division of two numbers is %d\n",div);


    printf("Enter two number (add) : ");
    scanf("%d %d",&x,&y);
    sum=x+y;

    printf("The sum of two numbers is %d\n",sum);


    return 0;
}