#include<stdio.h>
int main()
{
    int fee,att;
    printf("Is your fee submitted ?");
    scanf("%d",&fee);
    printf("Is your attendance 75%% ?");
    scanf("%d",&att);

    if(fee==1){
        if(att==1){
            printf("welcome\n");
        }
        else{
            printf("koi dekh to nahi raha\n");
        }
    }
    else{
        printf("Jao account department mein pata nahi sir ke pass\n");
    }

    return 0;
}