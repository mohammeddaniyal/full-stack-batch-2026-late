#include<stdio.h>
enum
{
    MAGGI=1,
    PIZZA,
    PANI_PURI,
    GULAAB_JAMUN
};
int main()
{
    int choice;
    printf("1. Maggi\n");
    printf("2. Pizza\n");
    printf("3. Pani Puri\n");
    printf("4. Gulaab Jamun\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);


    if(choice==MAGGI)
    {
        printf("Customer ordered Maggi\n");
    }else if(choice==PIZZA)
    {
        printf("Customer ordered Pizza\n");
    }else if(choice==PANI_PURI)
    {
        printf("Customer ordered Pani Puri\n");
    }else if(choice==GULAAB_JAMUN)
    {
        printf("Customer ordered Gullab Jamun\n");  
    }else
    {
        printf("Choti bacchi ho kia\n");
    }


    return 0;
}