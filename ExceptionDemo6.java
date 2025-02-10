import java.util.Scanner;
class AgeInvalidException extends ExceptionDemo1
{
    public AgeInvalidException(String str)
    {
        super(str);
        System.out.println("Inside constructor");
    }
}
class ExceptionDemo6
{
     public static void main(String A[])
    {
        int Age = 0;
    
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Age :");
        Age = sobj.nextInt();

        try
        {
            System.out.println("Inside catch");
            if(Age < 18)
            {
                AgeInvalidException aobj=new AgeInvalidException("Your age is less than 18");
                throw aobj;
            }
        }
        catch(AgeInvalidexception obj)
        {
            System.out.println("Inside catch");
            System.out.println(obj);
        }
        finally 
        {
            System.out.println("Inside finally");
        }
        System.out.println("End of application");

    }
}