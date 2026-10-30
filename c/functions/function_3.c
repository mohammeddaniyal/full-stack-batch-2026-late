#include <stdio.h>

void add(int abcd,int doreamon) // this are parameter, that accept value
{
    int sum;
    sum = abcd + doreamon;

    printf("The sum of two numbers is %d\n", sum);
}
void subtract(int x,int y)
{
    int diff;
    diff = x - y;

    printf("The difference of two numbers is %d\n", diff);
}
void multiply(int a,int b)
{
    int product;
    product = a * b;

    printf("The product of two numbers is %d\n", product);
}
void divide(int x,int y)
{
    int div;
    div = x / y;

    printf("The division of two numbers is %d\n", div);
}
int main()
{
    char choice;
    int x,y;


    while (1)
    {

        printf("+ Add\n");
        printf("- Subtract\n");
        printf("* Multply\n");
        printf("/ Divide\n");
        printf(". Exit\n");

        printf("Enter your choice : ");
        scanf("%c", &choice);

        if(choice=='+' || choice=='-' || choice=='*' || choice=='/')
        {
            printf("Enter two number : ");
            scanf("%d %d",&x,&y);
        }
        switch (choice)
        {
        case '+':
            add(x,y); // here x and y are argument, we are passing value of x and y
            break;
        case '-':
            subtract(x,y);
            break;
        case '*':
            multiply(x,y);
            break;
        case '/':
            divide(x,y);
            break;
        case '.':
            return 0;
        default:
            printf("Choti bachi ho kia\n");
            break;
        }
    }
    return 0;
}