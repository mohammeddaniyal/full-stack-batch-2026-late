#include<stdio.h>
int main()
{
    int ch;
    printf("1. Red\n");
    printf("2. Yellow\n");
    printf("3. Green\n");

    printf("Enter your choice :");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("Stop\n");
        break;
    case 2:
        printf("Ready\n");
        break;

    case 3:
        printf("Challooooo\n");
        break;
    default:
        printf("Wrong number\n");
        break;
    }

    return 0;
}