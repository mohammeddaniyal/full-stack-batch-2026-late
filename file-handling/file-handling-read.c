#include<stdio.h>
int main()
{
    FILE *fp;
    char name[25];
    int marks;
    fp=fopen("student.txt","r");
    if(fp==NULL)
    {
        printf("File cannot be opened\n");
        return 0;
    }
    fscanf(fp,"%s",name);
    fscanf(fp,"%d",&marks);

    printf("Name: %s\n",name);
    printf("Marks: %d\n",marks);

    printf("Data read successfully\n");

    fclose(fp);
    return 0;
}

