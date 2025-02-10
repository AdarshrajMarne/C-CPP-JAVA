class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is running with name "+Thread.currentThread().getName());
        System.out.println("Thread priority is : "+Thread.currentThread().getPriority());
    }
}
class ThreadDemo8
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Inside main thread :"+Thread.currentThread().getName());

        Demo dobj = new Demo();
        Thread tobj = new Thread(dobj);
        tobj.setName("PPA");
       // tobj.setPriority(10);
        tobj.start();



        Demo dobj2 = new Demo();
        Thread tobj2= new Thread(dobj2);
        tobj2.setName("LB");

       
 
    }
}