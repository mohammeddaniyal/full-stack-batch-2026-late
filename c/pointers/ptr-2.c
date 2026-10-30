#include<stdio.h>
int main()
{
    int x=10;
    int *y; 
    y=&x;

    printf("x: %d\n",x);
    printf("y: %u\n",y);
    *y=20;
    printf("x: %d\n",x);


    printf("int : %d\n",sizeof(int));
    printf("long : %d\n",sizeof(long));
    printf("char : %d\n",sizeof(char));
    printf("float : %d\n",sizeof(float));
    printf("double : %d\n",sizeof(double));

    return 0;
}