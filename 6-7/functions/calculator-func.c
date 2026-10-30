#include <stdio.h>

void add(int a, int b)
{
    printf("Addition of two number is %d\n", a + b);
}

int subtract(int e, int f)
{
    return e - f;
}

int multiply(int i, int j)
{
    int mul;
    mul = i * j;
    return mul;
}

float divide(int x, int y)
{
    return (float)x / y;
}

int main()
{
    int x, y;
    char op;
    int mult;
    while (1)
    {

        printf("Calculator\n");
        printf("Select Operation +,-,* or /\n");
        printf("For Exit '!'\n");

        printf("Enter mode operation : ");
        scanf(" %c",&op);

        if(op=='!')
        {
            break;
        }

        printf("Enter two number : ");
        scanf("%d %d", &x,&y);

        switch (op)
        {
        case '+':
            add(x, y);
            break;
        case '-':
            printf("Subtract of two number is %d\n", subtract(x, y));
            break;
        case '*':
            mult = multiply(x, y);
            printf("Multiply of two number is %d\n", mult);
            break;
        case '/':
            printf("Division of two number is %.2f\n", divide(x, y));
            break;
        default:
            printf("Sikeeee that's wrong number\n");
            break;
        }
    }

    printf("Thank you for using our Calculator\n");
    return 0;
}