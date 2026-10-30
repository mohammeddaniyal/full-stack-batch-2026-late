#include<stdio.h>
int main()
{
    int x[5];
    int y[]={23,23,12,34,12};
    int z[2];
    z={12,12};
    x[0]=10;
    x[4]=78;
    x[3]=12;

    printf("%d %d %d %d %d\n",x[0],x[3],x[4],x[2],x[1]);
    return 0;
}