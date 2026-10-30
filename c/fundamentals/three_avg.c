#include<stdio.h>
int main()
{
    int a,b,c;
    int total;
    float avg;
    printf("Enter three number : ");
    scanf("%d %d %d",&a,&b,&c);

    total=a+b+c;
    avg= (float) total/3; // we're type casting int into float

    printf("The average of three number is %f\n",avg);

    return 0;
}