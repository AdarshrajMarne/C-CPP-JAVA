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

class DerivedX extends Derived
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

class Multileve
{
    public static void main(String A[])
    {
        System.out.println("Inside main method");
        DerivedX dobj=new DerivedX();

        dobj.fun();
        dobj.Gun();
        dobj.sun();

    }


}