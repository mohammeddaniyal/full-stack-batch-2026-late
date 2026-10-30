#include<stdio.h>

enum Signal
{
RED=1, // 0
YELLOW, // 1
GREEN // 2
};

int main()
{
	int choice;
	enum Signal s;

	printf("Choose one\n");
	printf("Red 0\n");
	printf("Yellow 1\n");
	printf("Green 2\n");

	printf("Enter your choice : ");
	scanf("%d",&choice);

	if(choice==RED)
		printf("Stop!!!\n");
	else if(choice==YELLOW)
		printf("Ready to go\n");
	else if(choice==GREEN)
		printf("CHALLLLLLO\n");
	return 0;
}
