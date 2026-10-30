#include<stdio.h>
int main()
{

    int age[5];
    char name[35][5];
    float per[5];
    printf("------------------------\n");
    printf("  Enter student details\n");
    printf("------------------------\n");
    
    for(int i=0;i<5;i++)
    {
        printf("Enter age,name,percentage : ");
        scanf("%d %s %f",&age[i],name[i],&per[i]);
    }
    printf(" Student Input Ends\n");
    printf("------------------------\n");

    printf("------------------------\n");
    printf(" Details of students\n");
    printf("------------------------\n");
    printf("S.no | Age | Name          |Percentage\n");
    printf("------------------------\n");



    for(int i=0;i<5;i++) printf("%d | %d | %s | %.2f\n",i+1,age[i],name[i],per[i]);
    printf("------------------------\n");



    return 0;
}