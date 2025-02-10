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

class Singlelevel
{
    public static void main(String A[])
    {
        System.out.println("Inside main method");
        Derived dobj=new Derived();

        dobj.fun();
        dobj.Gun();

    }


}