#include<stdio.h>

int main()
{
   int Arr[3][4]={10,20,30,40,50,60,70,80,90,100,110,120};

printf("%d",sizeof(Arr));

printf("%d",Arr[1][0]);
printf("%d",Arr[2][1]);
printf("%d",Arr[1][1]);
printf("%d",Arr[0][2]);
printf("%d",Arr[1][3]);
printf("%d",Arr[2][3]);
printf("%d",Arr[0][3]);

    return 0;
}