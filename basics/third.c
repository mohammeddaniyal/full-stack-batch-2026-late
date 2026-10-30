#include<stdio.h>
int main()
{
    int x,y;
    int sum;
    int diff;
    x=10;
    y=20;
    printf("The result of sum of two number %d + %d = %d\n",x,y,x+y);
    sum=x+1000;
    printf("The result of sum of two number %d + %d = %d\n",x,y,sum);
    diff=x-y;
    printf("%d",diff);  
    return 0; 
}