#include<stdio.h>

struct Demo
{
int no;
float f;
int *p;
float *q;
};
int main(){

struct Demo obj;
int i=11;
float Marks=90.99;

obj.no=51;
obj.f=3.14;
obj.p=&i;
obj.q=&Marks;

printf("%d\n",*(obj.p));
printf("%f\n",*(obj.q));

    return 0; 
}