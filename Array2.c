#include<stdio.h>

int main()
{

int Price[]={67,89,45,88,90,34};

printf("%d\n",Price[0]);   
printf("%d\n",Price[2]);
printf("%d\n",Price[5]);

printf("%lu\n",sizeof(Price));
printf("%lu\n",sizeof(Price[1]));
printf("%lu\n",sizeof(Price[3]));

    return 0;
}