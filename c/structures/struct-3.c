#include<stdio.h>
#include<string.h>
typedef struct Student
{
    int age; // 4 byte
    char name[50]; // 50 byte
    float percentage; // 4 byte
}Vidhyarti;
int main()
{
    Vidhyarti v;
    printf("Enter Vidhyarti Age : ");
    scanf("%d",&v.age);
    // accept name and percentage (H.W)
    printf("Student name : %s and age is %d and percentage %.2f\n",v.name,v.age,v.percentage);

    int *x;
    x=(int *)malloc(sizeof(int)*10);


    Vidhyarti *vv;
    vv=(Vidhyarti *)malloc(sizeof(Vidhyarti));

    vv->age=10;
    

    return 0;
}