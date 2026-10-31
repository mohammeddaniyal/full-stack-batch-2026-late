#include<stdio.h>
#include<string.h>
int main()
{
    char str1[25]="Apple";
    char str2[25];
    int a=10;
    int b;
    b=a;
    printf("Before copy %s\n",str2);
    strcpy(str2,str1);
    printf("After copy %s\n",str2);
    
    
    return 0;
}