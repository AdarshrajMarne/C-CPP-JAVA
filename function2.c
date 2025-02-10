#include<stdio.h>

// Function Defination 
int Addition(int value1, int Value2)
{
    int Result= 0;                // Local variable

    Result=value1+Value2;

    return Result;
}
int main(){                      // Entry point function

int No1=0 , No2=0, Ans=0;        // Local variable

printf("Enter first number: \n ");
scanf("%d",&No1);

printf("Enter second number:\n");
scanf("%d",&No2);

Ans=Addition(No1,No2);             //Function call

printf("Addition is :%d\n",Ans);

    return 0;
}