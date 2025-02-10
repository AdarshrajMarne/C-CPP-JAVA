import java.util.*;

class Collection
{
    public static void main(String A[])
    {
        LinkedList <Integer> lobj = new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);

        System.out.printl(lobj);

        lobj.addFirst(5);

        System.out.printl(lobj);

        Iterator iobj = lobj.iterator();
        while(iobj.hasNext())
        {
            System.out.printl(iobj.next());
        }        
    }
}