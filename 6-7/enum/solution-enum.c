#include<stdio.h>

enum Signal
{
RED=1, //1
YELLOW, //2
GREEN //3
};


int main()
{
    enum Signal ch;
    printf("1. Red\n");
    printf("2. Yellow\n");
    printf("3. Green\n");

    printf("Enter your choice :");
    scanf("%d",&ch);

    switch (ch)
    {
    case RED:
        printf("Stop\n");
        break;
    case YELLOW:
        printf("Ready\n");
        break;

    case GREEN:
        printf("Challooooo\n");
        break;
    default:
        printf("Wrong number\n");
        break;
    }

    return 0;
}