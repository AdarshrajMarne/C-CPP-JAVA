#include<iostream>
using namespace std;

class Base 
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i=10;
            j=20;
            k=30;
        }
         void gun()
        {
            cout<<i<<"\n";  //Allowed
            cout<<j<<"\n";  //Allowed
            cout<<k<<"\n";  //Allowed
        }

};

class Derived : public Base
{
    public:
        void fun()
        {
            cout<<i<<"\n";  //Allowed
            cout<<j<<"\n";  //Not allowed
            cout<<k<<"\n";  //Allowed
        }

};

class DerivedX: public Derived
{
    public:
        int a,b;
        DerivedX()
        {
            cout<<"Inside DerivedX constructor\n";
            a=50;
            b=60;
        }
        ~DerivedX()
        {
            cout<<"Inside derived destructor\n";
        }
        void Sun()
        {
            cout<<"Inside Derived Sun\n";
        }
};
int main()
{
    Derived dobj;
    //Constructors : Base -> Derived ->DerivedX


    cout<<"Inside main function\n";

    cout<<"Size of Base class "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived class "<<sizeof(Base)<<"\n";
    cout<<"Size of DerivedX class "<<sizeof(Base)<<"\n";

    cout<<dobj.i<<"\n";     //Allowed
    cout<<dobj.j<<"\n";     //Not Allowed
    cout<<dobj.k<<"\n";     //Not Allowed
    cout<<dobj.y<<"\n";
    cout<<dobj.a<<"\n";
    cout<<dobj.b<<"\n";

    dobj.fun();
    dobj.gun();
    dobj.Sun();
    return 0;
}