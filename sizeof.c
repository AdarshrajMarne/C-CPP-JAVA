#include<stdio.h>

int main()
{
char c= 'D';
int i =11;
float f =78.90;
double d=76.986756;

printf("%d\n",sizeof(c));   //1
printf("%d\n",sizeof(i));   //4
printf("%d\n",sizeof(f));   //4
printf("%d\n",sizeof(d));   //8

    return 0;
}