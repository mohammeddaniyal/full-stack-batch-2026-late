#include<stdio.h>
int main()
{   
    // step 1:
    // variable declaration
    int arr[10];
    int largest;
    int i;

    //step 2:
    // accepting input into our array
    for(i=0;i<=9;i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
    }

    // step 3: (Main Largest Searching Algorithm)

    largest=arr[0];
    i=1;
    while(i<=9)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }
        i++;
    }

    // step 4: RESULT
    printf("The largest element in our array is %d\n",largest);

    return 0;
}