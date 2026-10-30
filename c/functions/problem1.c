#include<stdio.h>
int main()
{
    int num; // we are declaring a variable, which holds an int type data
    // in our logic it will hold the data of person age

    printf("Enter a number : ");
    scanf("%d",&num);


    if(num>0)
    printf("Positive\n");
    else if(num==0)
    printf("Zero\n");
    else
    printf("Negative\n");
   
    return 0;
}