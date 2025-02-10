#include<iostream>
using namespace std ;

class Base 
{
    public :
        void fun(){                     //Defination
            cout<<"Inside Base Fun \n";
        }


};

class Derived : public Base
{
     public :
        void fun(){                     //Redefination
            cout<<"Inside Derived Fun \n";
        }

};

int main()
{
    cout<<sizeof(Base)<<"\n";   
    cout<<sizeof(Derived)<<"\n";        // 1 byte
    Base bobj;
    bobj.fun();
    

    Derived dobj;
    dobj.fun();
    return 0;
}