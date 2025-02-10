#include<stdio.h>

int main()
{

   int no=21;

   int *p=&no;

   int **q=&p;

   int ***x=&q;

   int ****y=&x;

   int *****z=&y;

   int ***a=&q;

   int ****b=&a;

    return 0;
}