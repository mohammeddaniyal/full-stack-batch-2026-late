#include<stdio.h>
int main()
{
    int x; // varaible of int type
    // x is capable of storing int type values
    int *p; // this guy here is a pointer of which type, int
    // a pointer is used to store an address
    // this p here can store address only of int type variable

    p=&x;
    x=100;
    printf("P pointer address %u and points to x and its value : %d\n",p,*p);

    x=10;

    printf("%d\n",x); // 10

    *p=999;
    printf("%d\n",x); // 999

    *p=876;
    printf("%d",x); // 10
    return 0;
}