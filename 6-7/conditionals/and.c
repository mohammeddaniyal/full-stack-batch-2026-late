#include<stdio.h>
int main()
{
    int pass,entrance;
    printf("Are you 12th pass ? ");
    scanf("%d",&pass);
    printf("Did you clear the entrance exam?");
    scanf("%d",&entrance);


    if(pass==1 && entrance==1)
    {
        printf("You're qualified for admission\n");
    }
    else
    {
        printf("You're not qualified for admission\n");
    }

    return 0;
}