#include<stdio.h>
int main()
{
    // Variable declaration
    int phy,chem,math,eng,hin;
    int total;
    float percentage;

    // Accepting Input
    printf("Enter marks of physics : ");
    scanf("%d",&phy);
    printf("Enter marks of chemistry : ");
    scanf("%d",&chem);
    printf("Enter marks of Maths : ");
    scanf("%d",&math);
    printf("Enter marks of English : ");
    scanf("%d",&eng);
    printf("Enter marks of hindi : ");
    scanf("%d",&hin);

    // Processing the input
    total = phy+chem+math+eng+hin;
    percentage = (float)total/5;

    // Showing the output 

    printf("Daniyal achieved %d/500 and scored %.2f%%\n",total,percentage);

    return 0; // our code successfully executed
}