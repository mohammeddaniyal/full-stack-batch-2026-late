#include<stdio.h>
int bhaijaan=1; //global variable


// definition of a fucntion
void add(int x,int y)
{
    int sum;
    sum=x+y;
    printf("The sum of two numbers is %d\n",sum);
}

void subtract(int x,int y)
{
    int diff;
    diff=x-y;
    printf("The difference of two numbers is %d\n",diff);
}

int multiply(int x,int y)
{
    int product;
    product=x*y;
    return product;
}

int divide(int varsha,int second)
{
    int div;
    div=varsha/second;
    return div;
    
}

int main()
{
    int x,y;
    int ch;
    int product;

    while(1)
    {

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    if(ch==5)
    {
        printf("Tata bye bye khatam!!!!");
        return 0;
    }
    printf("Enter two number : ");
    scanf("%d %d",&x,&y);
    
    switch (ch)
    {
        case 1:
            add(x,y); // we are calling a function name add and passing two arguments x and y
            break;
        case 2:
            subtract(x,y);
            break;
        case 3:
            product=multiply(x,y);
            printf("The product of two numbers is %d\n",product);

            break;
        case 4:
            printf("The division of two number is %d\n",divide(x,y));
            break;
        default:
            printf("Invalid choice");
            break;
    }

}
    return 0;
}