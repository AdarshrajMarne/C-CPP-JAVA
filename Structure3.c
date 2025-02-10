#include<stdio.h>

// structure 
#pragma pack(1)
struct Demo 
{
    int no;
    float f;
    double d;
    int i;
};

int main()
{
   struct Demo obj;
   struct  Demo *ptr=&obj;
   
   ptr->no=11;
   ptr->f=1.20;
   printf("%d\n",ptr->no);
   printf("%d\n",ptr->f);
   /*
   ptr->f=3.10;
   ptr->d=90.9999;
   ptr->i=21;

   printf("%d\n",&ptr->no);
   printf("%d\n",&ptr->f);
   printf("%d\n",&ptr->d);
   printf("%d\n",&ptr->i);
   */
    return 0;
}