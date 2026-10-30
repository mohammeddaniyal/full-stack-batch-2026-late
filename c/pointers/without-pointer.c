#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++) 
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=4;i++) printf("%d ",arr[i]);
    
    return 0;
}