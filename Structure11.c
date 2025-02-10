#include<stdio.h>

#pragma pack(1);
struct Demo
{
int i;
float f;
char ch;
double d;
};
union Hello
{
int i;
float f;
char ch;
double d;
};
int main()
{
  struct Demo dobj;
  union Hello hobj;

  printf("size of structure is : %lu\n",sizeof(dobj));
  printf("size of structure is : %lu\n",sizeof(hobj));

  
    return 0;
}