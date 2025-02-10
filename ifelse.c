#include<stdio.h>

int main()
{
int No=0;
int Result=0;
printf("Enter number :\n");
scanf("%d",&No);

Result=No%2;

if(Result==0)
{
    printf("It is even Number \n");
}
else
{
    printf("It is odd Number \n");
}
    return 0;
}