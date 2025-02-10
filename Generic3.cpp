#include<iostream>
using namespace std;

float Addition(int No1 , int No2)
{
    float Ans = 0;
    Ans = No1 + No2;

    return Ans;
}
int main()
{
    float A = 10.90f, B = 11.60f;

    cout<<Addition(A,B)<<"\n";

    return 0;
}
