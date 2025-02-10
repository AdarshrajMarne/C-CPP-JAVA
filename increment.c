#include<stdio.h>

int main()
{
int A=10 , B=10;
int No1=0, No2=0;

No1=A++;           // Post increment (First intialise the increment)
printf("Value of No1: %d\n",No1);//10
printf("value of A:%d\n",A); //11

No2=++B;            // Pre increment(fist increment then intialise)
printf("Value of No1: %d\n",No2);//11
printf("value of A:%d\n",B);//11

    return 0;
}