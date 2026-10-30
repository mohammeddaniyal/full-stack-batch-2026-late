#include<stdio.h>
int main()
{
    int is_fee,is_attendance;
    printf("Is your fee submitted ? ");
    scanf("%d",&is_fee);
    printf("Is your attendance 75%% ? ");
    scanf("%d",&is_attendance);

    if(is_fee==1 && is_attendance==1)
    printf("You're are allowed in the exam\n"); 
    else
    printf("submit your fee or 75%% attendance is not completed\n");

    return 0;
}