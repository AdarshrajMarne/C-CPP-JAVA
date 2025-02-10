class Student   implements Cloneable   // class Student
{
    public String Name;
    public int Age;
    public int Marks;

    public Student(String A, int B, int C)
    {
        this.Name = A;
        this.Age = B;
        this.Marks = C;
    }

    public Object clone() throws CloneNoSupportedException
    {
        return super.clone();
    }

}

class ObjectDemo4
{
    try {
    public static void main(String A[])
    {
        Student sobj = new Student("Sagar",21,89);

        Student sobjX= (Student)sobj.clone();

        System.out.println("name is : "+sobj.Name);
        System.out.println("name is : "+sobj.Age);
        System.out.println("name is : "+sobj.Marks);

        System.out.println("name is : "+sobjX.Marks);
        System.out.println("name is : "+sobjX.Marks);
        System.out.println("name is : "+sobjX.Marks); 
    }
    catch(Exception obj)
    {}
    }
}