#include<stdio.h>
int bhaijaan=1;
void printMe()
{
    int x=10;
    printf("printMe : %d\n",x);
    printf("(printMe)Bhaijaan is no. %d\n",bhaijaan);
}
int main()
{
    int x,y;
    printMe();
    bhaijaan=100;
    printf("%d\n",x);
    printf("(Main)Bhaijaan is no. %d\n",bhaijaan);

    return 0;
}