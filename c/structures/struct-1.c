#include<stdio.h>
#include<string.h>
struct Student
{
    int age;
    char name[50];
    float percentage;
};
int main()
{
    struct Student aastha;
    aastha.age=18;
    aastha.percentage=60;
    strcpy(aastha.name,"Aastha Chourasiya");


    printf("Student name : %s and age is %d and percentage %.2f\n",aastha.name,aastha.age,aastha.percentage);

    return 0;
}