#include<iostream>
using namespace std;

template <class X>
X Addition(X No1 , X No2)
{
    X Ans ;
    Ans = No1 + No2;

    return Ans;
}
int main()
{
    float A = 10.90f, B = 11.60f;

    cout<<Addition(A,B)<<"\n";

    int X =10 , Y = 11;
    cout<<Addition(X,Y)<<"\n";

    double P = 90.99, Q = 78.90;
    cout<<Addition(P,Q)<<"\n";
    return 0;
}