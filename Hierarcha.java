class Base
{
    public int A,B;

    public Base ()
    {
        System.out.println("Inside Base constructor");
    }
    public void fun()
    {
        System.out.println("Inside Base Fun");
    }

}
class Derived extends Base{
    public int X,Y;

    public Derived()
    {
        System.out.println("Inside Derived constructor");
    }
    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }

}

class DerivedX extends Base
{
        public int P,Q;
public DerivedX()
    {
        System.out.println("Inside DerivedX constructor");
    }
    public void sun()
    {
        System.out.println("Inside DerivedX sun");
    }

}

class Hierarchal 
{
    public static void main(String A[])
    {
        System.out.println("Inside main method");
       
        Derived dobj1= new Derived();

        DerivedX dobj2= new DerivedX();

        dobj1.fun();
        dobj1.Gun();

        dobj2.Fun();
        dobj2.sun();
    }


}