#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[]="python";

    printf("Length of string is : %d\n",strlen(Arr));

    printf("Size of string is :%d\n",sizeof(Arr));

    printf("%c\n",Arr[3]);
    printf("%c\n",Arr[5]);
    printf("%c\n",Arr[1]);

    return 0;
}