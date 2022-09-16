using System;

class ASSIGNMENT
{
    // public ASSIGNMENT(int a, int b){}
    void greeting(string name)
    {
        Console.WriteLine("Hello " + name);
    }
    void sum(int a, int b)
    {
        Console.WriteLine("The sum of given numbers is = {0}",a+b);
    }
    void divide(int a, int b)
    {
        double result = (double)a/(double)b;
        Console.WriteLine("The divition of given numbers is = {0}",result);
    }
    void operationResults()
    {
        Console.WriteLine("Test data:");
        Console.WriteLine("\t -1+4*6 = {0}",-1+4*6);
        Console.WriteLine("\t (35+5)%7 = {0}", (35+5)%7);
        Console.WriteLine("\t 14+ -4*6/11  = {0}",14+-4*6/11);
        Console.WriteLine("\t 2+15/6*1-7%2 = {0}",2+15/6*1-7%2);
    }
    void swap(int a, int b)
    {
        Console.WriteLine("before swaping the values of a and b are : {0} {1}",a,b);
        int temp = 0;
        temp = a;
        a = b;
        b = temp;
        Console.WriteLine("After swaping the values of a and b are : {0} {1}",a,b);
    }

    static void Main()
    {
        string name;
        int a,b;
        Console.Write("Please Enter your name...! = ");
        name = Console.ReadLine();
        ASSIGNMENT obj = new ASSIGNMENT(); 
        obj.greeting(name);
        Console.Write("Please Enter first number = ");
        a = Convert.ToInt32(Console.ReadLine());
        Console.Write("Please Enter second number = ");
        b = Convert.ToInt32(Console.ReadLine());
        // Console.WriteLine($"user entered = {a},{b}");

        obj.sum(a,b);
        obj.divide(a,b);
        obj.operationResults();
        obj.swap(10,20);
    }
    private int m_num1;
    private int m_num2;

}