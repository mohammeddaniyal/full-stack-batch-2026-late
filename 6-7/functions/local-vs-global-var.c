#include<stdio.h>
void why();
void jerry()
{
    // printf("Bhaijaan %d\n",bhaijaan);

}
int bhaijaan=1; // global variable
void tom()
{
    int raju; // local variable
    printf("Tom ka raju %d\n",raju);
    printf("Bhaijaan %d\n",bhaijaan);
}
int main()
{
    int raju=10; // local variable
    tom();
    printf("main ka raju %d\n",raju);
    printf("Bhaijaan %d\n",bhaijaan);
    why();
    return 0;
}
void why()
{
    printf("bas ese hi\n");
}