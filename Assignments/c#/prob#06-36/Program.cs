using System; 
using  allAssignments;
    class START : ASSIGNMENT {
        static public void Main() {

            // ASSIGNMENT obj = new ASSIGNMENT(48,39); 
            START obj = new START(); 
            obj.sum();
            obj.countSpace();
            // int a = obj.m_num1:
            obj.reactangel('9',3,5);
            obj.display4Times();
            obj.printTable();
            obj.absoluteDiff();
            obj.select();//Enviornment.exit(0)=>for sucessfull termination
            obj.displayEven();
            int a,b;
            obj.greeting();
            Console.Write("Please Enter first number = ");
            a = Convert.ToInt32(Console.ReadLine());
            Console.Write("Please Enter second number = ");
            b = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine($"The sum is  = {obj.sum(10,20,12,32,43)}");
            Console.WriteLine($"The multiply is  = {obj.mul(10,20,12,32,43)}");
            obj.divide(a,b);
            obj.operationResults();
            obj.swap(10,20);
        }

    }
