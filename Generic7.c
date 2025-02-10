#include<iostream>
using namespace std;

template <class T>
class Array
{
    public :
        T *Arr;
        int Size;

        Array(T no)
        {
            Size = no;
            Arr = new T[Size];
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elemets\n";
            int iCnt = 0;
            for(iCnt=0; iCnt < Size; iCnt++)
            {
                cin<<Arr[iCnt]<<"\n";
            }
        }
        void Display()
        {

        }
};


int main()
{
   Array <int>aobj(5);
   aobj.Accept();
   aobj.Display();

    Array <char>aobj(5);
   aobj2.Accept();
   aobj2.Display();

 
}