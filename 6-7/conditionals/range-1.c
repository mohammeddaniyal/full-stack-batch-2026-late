#include <stdio.h>

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num>=1 && num<=100)
    {
        printf("the number is in 1-100\n");
    }
    else
    {
        printf("It's not in 1-100\n");
    }
    return 0;
}