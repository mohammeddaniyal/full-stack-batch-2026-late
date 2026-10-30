#include <stdio.h>
int main()
{
    int choice;
    printf("1. Maggi\n");
    printf("2. Pizza\n");
    printf("3. Pani Puri\n");
    printf("4. Momos\n");

    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Customer ordered Maggi\n");
        break;

    case 2:
        printf("Customer ordered Pizza\n");
        break;

    case 3:
        printf("Customer ordered Pani Puri\n");
        break;

    case 4:
        printf("Customer ordered Momos\n");
        break;

    default:
        printf("Choti bachi ho kia\n");
        break;
    }

    return 0;
}