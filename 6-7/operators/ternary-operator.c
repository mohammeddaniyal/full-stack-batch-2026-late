#include<stdio.h>
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d",&num);

    // condition ? (expression 1) : (expression 2) ;
    (num>0) ? (printf("Positive\n")) : printf("Negative\n") ; 


    return 0;
}