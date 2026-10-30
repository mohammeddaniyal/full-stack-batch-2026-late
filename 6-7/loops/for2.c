#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter starting and ending point : ");
    scanf("%d %d",&start,&end);

    while(start<=end)
    {
        printf("%d\n",start);
        start++;
    }

    return 0;
}