#include<stdio.h>

int main()
{
    int Arr[5]={10,20,30,40,50};

    int *p=&(Arr[1]);
    int *q=&(Arr[3]);
    
    printf("%d\n",Arr);  // 100
    printf("%d\n",&Arr);  
    printf("%d\n",&(Arr[0]));

    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",*p);
    printf("%d\n",*q);  
    return 0;
}