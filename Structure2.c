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
    // Object Ctreation of structure
   struct  Demo obj1;
   struct  Demo obj2;
   
  printf("%d\n",sizeof(obj1));

obj1.no=11;
obj1.f=3.10;
obj1.d=6.9999;
obj1.i=21;

obj2.no=101;
obj2.f=10.90;
obj2.d=90.9999;
obj2.i=111;

printf("%d\n",obj1.no);
printf("%d\n",obj2.no);
    return 0;
}