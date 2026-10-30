#include<stdio.h>

int main()
{
    int x[10];
    int i;
    int rollNumber;
    int found=0; // default value as 0 means ? -> false
    for(i=0;i<=9;i++)
    {
       printf("Enter a number : ");
       scanf("%d",&x[i]);
    }
    printf("-------------------\n");
    printf("Student database\n");
    printf("-------------------\n");

    for(i=0;i<=9;i++)
    {
        printf(" | %d | ",x[i]);     
    }
    printf("\n-------------------\n");


    printf("Tell me your roll number : ");
    scanf("%d",&rollNumber);

    for(i=0;i<=9;i++)
    {
        if( rollNumber==x[i] )
        {
            found=1;
            break;
        }
    }


    if(found==1)
    {
        printf("You can enter\n");
    }
    else
    {
        printf("Jao Jao Bhaisaab Ghar jao\n");
    }


    return 0;
}