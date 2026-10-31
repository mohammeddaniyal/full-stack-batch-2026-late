#include<stdio.h>
#include<string.h>

struct Student
{
    char name[51];
    int age;
    float percentage;
};

int main()
{
    struct Student std1,std2;
    
    std1.age=21;
    strcpy(std1.name,"Anas");
    std1.percentage=98.99f;

     std2.age=20;
    strcpy(std2.name,"Aayush");
    std2.percentage=78.99f;


    printf("Name %s and Age %d and percentage %.2f%%\n",std1.name,std1.age,std1.percentage);

    return 0;
}