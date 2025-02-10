#include<stdio.h>

int main()
{
int A=10 , B=10;
int No1=0, No2=0;

No1=A--;           // Post increment (First intialise then decrement)
printf("Value of No1: %d\n",No1);//10
printf("value of A:%d\n",A); //9

No2=--B;            // Pre increment  (First decrement then intialise)
printf("Value of No1: %d\n",No2);//9
printf("value of A:%d\n",B);//9

    return 0;
}