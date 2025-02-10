#include<iostream>
using namespace std ;

class Base 
{
    public :
        int i,j;
        virtual void fun(){        //1000             
            cout<<"Inside Base Fun \n"; }
        void Gun(){                 //2000
            cout<<"Inside Base Gun\n";}
        virtual void Sun(){          //3000
            cout<<"Inside Base Sun\n";}
        virtual void Run(){
            cout<<"Inside Base Run\n";}

};

class Derived : public Base
{
     public :
        int x,y;
        virtual void fun()
        {   cout<<"Inside Derived Fun \n";}
        void Gun()
        {   cout<<"Inside Derived Gun \n";}
        virtual void Mun()
        {   cout<<"Inside Derived Mun \n";}
        void Run()
        { cout<<"Inside Derived Run\n";}

};

int main()
{
    cout<<"Size of base class :"<<sizeof(Base)<<"\n";
    cout<<"Size of Derived class :"<<sizeof(Derived)<<"\n";
    Derived dobj;
    Base *bptr=NULL;

    bptr=&dobj;     // Upcasting
  
    bptr->fun();    //Base Fun
    bptr->Gun();    //Base Gun
    bptr->Sun();    //Base Sun
    bptr->Run();    //Base Run
    //bptr->Mun();    // Error
    return 0;
}