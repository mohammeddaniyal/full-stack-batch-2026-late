#include<stdio.h>

struct Student
{
    char name[50];
    int rollNumber;
    int age;
    char gender;
    int class;
    char address[250];
    float fee;
};


struct Teacher
{
    char name[50];
    char gender;
    int class;
    float salary;
    char subject[35];
};

struct Course
{
    char name[50];
    float course_price;
    int duration;// in months
};

int main()
{
    int x,y,z;
    struct Student std1,std2,std3;
    struct Student std4;

    struct Teacher daniyal;
    struct Student aabhay;
    struct Course full_stack;

    return 0;
}
