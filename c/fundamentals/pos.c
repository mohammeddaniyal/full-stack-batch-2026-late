#include<stdio.h>
int main()
{
    // we are declaring two variables of int data type
    int side,perimeter;
    // we are giving a message for the input
    printf("Enter the side of a square : ");
    // we are accepting the input of int type
    scanf("%d",&side);
    // we are computing the perimeter of square
    perimeter=4*side;
    // we are printing the result
    printf("The perimeter of the square with side %d is %d\n",side,perimeter);

    return 0;
}