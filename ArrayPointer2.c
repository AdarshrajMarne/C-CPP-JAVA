#include<stdio.h>

int main(){

int Arr[5]={10,20,30,40,50};

printf("%d\n",Arr[2]);
printf("%d\n",*(Arr+2));
printf("%d\n",*(2+Arr));
printf("%d\n",2[Arr]);
/*
printf("%d\n",Arr);

printf("%d\n",Arr[0]);
*/
    return 0;
}