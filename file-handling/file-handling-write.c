#include<stdio.h>
int main()
{
    FILE *fp;;
    fp=fopen("student.txt","a");
    if(fp==NULL)
    {
        printf("File cannot be created\n");
        return 0;
    }
    fprintf(fp,"Aman\n");
    fprintf(fp,"70\n");


    printf("Data written successfully\n");

    fclose(fp);
    return 0;
}

