#include<stdio.h>
int main()
{
    int x[10];
    int i;
    for(i=0;i<=9;i++)
    {
       printf("Enter a number : ");
       scanf("%d",&x[i]);
    }

    for(i=0;i<=9;i++)
    {
        printf("%d\n",x[i]);     
    }

    return 0;
}