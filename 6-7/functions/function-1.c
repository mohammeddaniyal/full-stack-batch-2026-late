#include<stdio.h>

void printWhatever()
{
    printf("Hello whatever nice\n");
    printf("Great good \n");
    printf("Physics chemistry\n");
}

int main()
{
    int x=10;
    int y=20;
    printf("Sum : %d\n",x+y);
    
    printWhatever(); // we are calling a function

    printf("Diff : %d\n",x-y);
    
    printWhatever(); // we are calling a function
   
    
    printf("Mul : %d\n",x*y);

    printWhatever(); // we are calling a function

    
    printf("Div : %d\n",x/y);


    return 0;
}