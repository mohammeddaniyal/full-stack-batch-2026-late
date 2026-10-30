#include<stdio.h>
int main()
{
    int i;
    int req;
    printf("Enter your requriement :  ");
    scanf("%d",&req);
    int arr[req];
    for(i=0;i<req;i++) 
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=req-1;i++) printf("%d ",arr[i]);
    
    return 0;
}