class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is running ");
    }
}
class ThreadDemo3
{
    public static void main(String A[])
    {
        System.out.println("Name of currentt thread is :"+Thread.currentThread().getName());

        Demo dobj = new Demo();
        Thread tobj = new Thread(dobj);

        tobj.start();
    }
}