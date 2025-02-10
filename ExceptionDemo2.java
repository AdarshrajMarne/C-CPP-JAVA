import java.util.*;

class ExceptionDemo1
{
    public static void main(String A[])
    {

        Scanner sobj= new Scanner(System.in);
        int Arr[]={10,20,30,40,50};

        int index = 0;

        System.out.println("Enter the index : \n");
        index = sobj.nextInt();

        System.out.println("value at the given index is : "+Arr[index]);
    }
}