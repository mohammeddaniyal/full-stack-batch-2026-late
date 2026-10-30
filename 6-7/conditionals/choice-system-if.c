#include<stdio.h>
int main()
{
    int choice;
    printf("1. Maggi\n");
    printf("2. Pizza\n");
    printf("3. Pani Puri\n");
    printf("4. Momos\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);


    if(choice==1)
    {
        printf("Customer ordered Maggi\n");
    }else if(choice==2)
    {
        printf("Customer ordered Pizza\n");
    }else if(choice==3)
    {
        printf("Customer ordered Pani Puri\n");
    }else if(choice==4)
    {
        printf("Customer ordered Momos\n");  
    }else
    {
        printf("Choti bacchi ho kia\n");
    }


    return 0;
}