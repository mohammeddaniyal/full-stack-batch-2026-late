#include<stdio.h>

// a function is block of code, which performs a specific task

void greetings()
{
    printf("Hello Greetings\n");
}
void greetingsAsX(int x)
{
    printf("Hello Greetings %d\n",x);
}
int main()
{
    int x;
    int y;
    x=10;
    greetings(x);
    y=20;
    greetings();
    x=100;
    greetings();
    return 0;
}