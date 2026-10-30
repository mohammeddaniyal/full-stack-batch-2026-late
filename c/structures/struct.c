#include<stdio.h>
#include<string.h>
typedef struct Student
{
    int age;
    char name[50];
    float percentage;
}Shishya;
int main()
{
    Shishya std;
    printf("Enter name,age,percentage : ");
    scanf("%s %d %f",&std.name,&std.age,&std.percentage);

    printf("Name : %s | Age : %d | Percentage : %.2f",std.name,std.age,std.percentage);

    return 0;
}