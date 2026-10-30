#include<stdio.h>
#include<string.h>
 typedef struct Student // it is a struct 
    {
        int age; // they are its members
        char name[35];
        float per;
    }Vidhyaarthi;

int main()
{
    Vidhyaarthi v[5];
    // this is a structure of data type struct Student

    printf("------------------------\n");
    printf("  Enter student details\n");
    printf("------------------------\n");
    
    for(int i=0;i<5;i++)
    {
        printf("Enter age,name,percentage : ");
        scanf("%d %s %f",&v[i].age,v[i].name,&v[i].per);
    }

    printf(" Student Input Ends\n");
    printf("------------------------\n");

    printf("------------------------\n");
    printf(" Details of students\n");
    printf("------------------------\n");
    printf("S.no | Age | Name          |Percentage\n");
    printf("------------------------\n");

    for(int i=0;i<5;i++) printf("%d | %d | %s | %.2f\n",i+1,v[i].age,v[i].name,v[i].per);
    printf("------------------------\n");

    return 0;
}