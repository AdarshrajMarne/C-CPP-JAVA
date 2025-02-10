#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1,No2,No3;

        Demo(int A, int B, int C)
        {
            No1=A;
            No2=B;
            No3=C;
        }

};
int main()
{
    Demo obj1(11,21,51);

    return 0;
}