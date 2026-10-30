#include <stdio.h>

void add()
{
    int x, y, sum;
    // this is the code for accepting two number and computing there sum
    printf("Enter two number (add) : ");
    scanf("%d %d", &x, &y);
    sum = x + y;

    printf("The sum of two numbers is %d\n", sum);
}
void subtract()
{
    int x, y, diff;

    // this is the code for accepting two numbers and computing there difference
    printf("Enter two number (sub): ");
    scanf("%d %d", &x, &y);
    diff = x - y;

    printf("The difference of two numbers is %d\n", diff);
}
void multiply()
{
    int x, y, product;
    // this is the code for accepting two numbers and computing there product
    printf("Enter two number (mul): ");
    scanf("%d %d", &x, &y);
    product = x * y;

    printf("The product of two numbers is %d\n", product);
}
void divide()
{
    int x, y, div;
    // this is the code for accepting two numbers and computing there division
    printf("Enter two number (div): ");
    scanf("%d %d", &x, &y);
    div = x / y;

    printf("The division of two numbers is %d\n", div);
}
int main()
{
    int choice;


    while (1)
    {

        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            return 0;
        default:
            printf("Choti bachi ho kia\n");
            break;
        }
    }
    return 0;
}