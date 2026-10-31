#include<stdio.h>
#include<string.h>

typedef struct Student
{
    char name[51];
    int age;
    float percentage;
}Vidhyarti;

int main()
{
    Vidhyarti std;
    
    
    printf("Enter Vidhyarti Name,age and percentage");
    scanf("%s %d %f",&std.name,&std.age,&std.percentage);

    printf("Name %s and Age %d and percentage %.2f%%\n",std.name,std.age,std.percentage);

    return 0;
}