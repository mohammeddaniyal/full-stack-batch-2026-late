#include<stdio.h>
int main()
{
    char str1[]="Hello"; // only on the declaration line
    printf("%s\n",str1);

    char str2[4]="Bye";
    printf("%s\n",str2);

    char str3[4];
    str3[0]='h';
    str3[1]='e';
    str3[2]='y';
    str3[3]='\0';

    printf("%s\n",str3);


    return 0;
}