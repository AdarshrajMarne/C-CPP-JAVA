class Base
{
    public int A,B;


    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
    public void Gun()
    {
        System.out.println("Inside Base Fun");
    }
    public void Sun()
    {
        System.out.println("Inside Base Fun");
    }
    public void Run()
    {
        System.out.println("Inside Base Fun");
    }
}
class Derived extends Base{
    public int X,Y;


    public void Fun()
    {
        System.out.println("Inside Derived Gun");
    }
    public void Sun()
    {
        System.out.println("Inside Derived Gun");
    }
    public void Mun()
    {
        System.out.println("Inside Derived Gun");
    }

    public void Bun()
    {
        System.out.println("Inside Derived Gun");
    }
}

class RMD
{
    public static void main(String A[])
    {
       Base bobj=new Derived();
       bobj.Fun();
       bobj.Gun();
       bobj.Sun();
       bobj.Run();
     //  bobj.Mun();
     //  bobj.Bun();
    }


}
// Base boj=new Base()              No Casting
// Derived dobj = new Derived()     No casting
