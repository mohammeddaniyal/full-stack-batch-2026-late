#include<stdio.h>
int main()
{
    FILE *fp;
    int age;
    char name[50];
    
    fp=fopen("student.txt","r");
    if(fp==NULL)
    {
        printf("Unable to open the file\n");
        return 0;
    }

    fscanf(fp,"%s %d",name,&age);

    printf("Student age is %d and name is %s\n",age,name);
    fclose(fp);
    return 0;
}