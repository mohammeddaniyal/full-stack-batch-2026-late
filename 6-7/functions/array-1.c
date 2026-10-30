#include<stdio.h>


void inputTheArray(int x[],int size)
{   
    int i;
    for(i=0;i<size;i++)
    {
       printf("Enter a number : ");
       scanf("%d",&x[i]);
    }
}
void printTheArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);     
    }

}
int main()
{
    int x[10];
    int y[5];
    
    inputTheArray(x,10);

    printTheArray(x,10);


    inputTheArray(y,5);
    printTheArray(y,5);

    return 0;
}