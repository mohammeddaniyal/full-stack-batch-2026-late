#include<stdio.h>
#include<string.h>
struct Student
{
	int rollNumber;
	char name[36];
	float percentage;
};

int main()
{
	struct Student s1;
	strcpy(s1.name,"Mahak Tomar");
	s1.percentage=89.4;
	s1.rollNumber=101;
	
	printf("Student Details : \n");
	printf("Roll\n Number %d | Nam\ne %s |\n percentage %.2f\n",s1.rollNumber,s1.name,s1.percentage);

	return 0;
}