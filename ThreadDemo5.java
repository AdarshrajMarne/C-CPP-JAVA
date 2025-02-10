class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is running with name "+Thread.currentThread().getName());
        for(int i = 0; i < 1000; i++)
        {
            System.out.println(Thread.currentThread().getName()+ "with ID :"+ i);
        }

    }
}
class ThreadDemo5
{
    public static void main(String A[])
    {
        System.out.println("Inside main thread :"+Thread.currentThread().getName());

        Demo dobj = new Demo();
        Thread tobj = new Thread(dobj);
        tobj.setName("PPA");
        Demo dobj2 = new Demo();
        Thread tobj2= new Thread(dobj2);
        tobj2.setName("LB");

        tobj.start();
        tobj2.start();
    }
}