#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int req;
    int i;
    printf("Enter your requirement : ");
    scanf("%d",&req); 
    arr=(int *)malloc(sizeof(int)*req);
    if(arr==NULL)
    {
        printf("Unable to allocate memory\n");
        return 0;
    }

    for(i=0;i<req;i++)
    {
        printf("Enter a number : ");
        scanf("%d",(arr+i));
    }

    for(i=0;i<req;i++) printf("%d ",*(arr+i));


    return 0;
}
