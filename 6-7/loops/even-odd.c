#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter starting and ending point : ");
    scanf("%d %d",&start,&end);

    while(start<=end)
    {
        if(start%2==0)
        {
            printf("%d\n",start);
        }
        start++;
    }

    return 0;
}