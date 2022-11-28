using System; 

namespace allAssignments {
    class ASSIGNMENT {

        public ASSIGNMENT () {}// Default constructor
        public ASSIGNMENT(int a, int b) { // Paramerterized constructor
            this.m_num1 = a;
            this.m_num2 = b;
        }
        public void greeting() {
            string name;
            Console.Write("Please Enter your name...! = ");
            name = Console.ReadLine();
            Console.WriteLine("Hello " + name);
        }
        public void sum(int a, int b) {
            Console.WriteLine("The sum of given numbers is = {0}",a+b);
        }
        public int sum(params int[] list) {
            int len = list.Count();
            int a_sum = 0;
            for (int i = 0 ; i<len ; i++) {
                a_sum += list[i];  
            }
            return a_sum;
        }
        public void divide(int a, int b) {
            double result = (double)a/(double)b;
            Console.WriteLine("The divition of given numbers is = {0}",result);
        }
        public void operationResults() {
            Console.WriteLine("Test data:");
            Console.WriteLine("\t -1+4*6 = {0}",-1+4*6);
            Console.WriteLine("\t (35+5)%7 = {0}", (35+5)%7);
            Console.WriteLine("\t 14+ -4*6/11  = {0}",14+-4*6/11);
            Console.WriteLine("\t 2+15/6*1-7%2 = {0}",2+15/6*1-7%2);
        }
        public void swap(int a, int b) {
            Console.WriteLine("before swaping the values of a and b are : {0} {1}",a,b);
            int temp = 0;
            temp = a;
            a = b;
            b = temp;
            Console.WriteLine("After swaping the values of a and b are : {0} {1}",a,b);
        }
        public int mul(params int[] list) {
            int len = list.Count();
            int multiply = 1;
            for (int i = 0; i<len; i++) {
                multiply *= list[i];  
                Console.WriteLine($"The multiply of the given number is : {multiply}");
                Console.WriteLine($"The number is : {list[i]}");
            }
            return multiply;
        }

        public void drawLine(int column, char ends, char mids) {
            Console.Write(ends);
            for (int i = 1 ; i < column-1 ; ++i)
                Console.Write(mids);
            Console.WriteLine(ends);
        }

        public void reactangel(char num,int column, int row) {
            drawLine(column, num, num);
            for (int i = 1; i < row-1; ++i)
                drawLine(column, num, ' ');
            drawLine(column, num, num);
        }

        public void display4Times() {
            Console.Write("Please enter a number to display: ");
            int num = Convert.ToInt32(Console.ReadLine());
            for (int i = 0 ; i < 4 ; ++i)
                Console.Write(num+" ");
            Console.WriteLine();
            for (int i = 0 ; i < 4 ; ++i)
                Console.Write(num);
            Console.WriteLine();
        }

        public void printTable() {
            Console.Write("Please enter a number to display its table: ");
            int num = Convert.ToInt32(Console.ReadLine());
            for (int i = 1 ; i <= 10 ; ++i)
                Console.WriteLine($"{num} x {i} = {num*i}");
        }
        public void absoluteDiff() {
            Console.Write("Please enter first number : ");
            int num1 = Math.Abs(Convert.ToInt32(Console.ReadLine()));
            Console.Write("Please enter second number : ");
            int num2 = Math.Abs(Convert.ToInt32(Console.ReadLine()));
            if(num1>num2) {
                Console.WriteLine($"The double of absolute value of the difference is : {Math.Abs((num1-num2)*2)}");
            } 
            else {
                Console.WriteLine($"The absolute value of the difference : {Math.Abs(num1-num2)}");
            }
        }
        public void select() {
            Console.WriteLine("Select any opt:");
            Console.WriteLine("\t 1- Option A");
            Console.WriteLine("\t 2- Option B");
            Console.WriteLine("\t 3- Option C");
            Console.WriteLine("\t 4- Exit");
            bool loop = true;
            while(loop) {
                Console.Write("Please enter your choice in number : ");
                int choice = (Convert.ToInt32(Console.ReadLine()));
                switch (choice)
                {
                    case 1:
                        Console.WriteLine("User Selected Option A");
                        break;
                    case 2:
                        Console.WriteLine("User Selected Option B");
                        break;
                    case 3:
                        Console.WriteLine("User Selected Option C");
                        break;
                    case 4:
                        Console.WriteLine("Exiting .......!");
                        loop = false;
                        break;
                    default:
                        Console.WriteLine("Invailed choice...!");
                        break;

                }
            }
        }
        
        public void displayEven(){
            int i = 0;
            while (i<=100)
            {
                if((i%2) == 0 )
                    Console.WriteLine($"{i} Is a Even number");
                i++;
            }
        }

        public void countSpace() {
            Console.Write("Please enter a string : ");
                string str =(Console.ReadLine());
                int len = str.Length;
                int i = 0;
                int count = 0; 
                while (i!= len)
                {
                    if(str[i] == ' ')
                        count++;
                    i++;
                }
            Console.WriteLine("The number of spaces are : {0}",count);

        }

        public void sum() {
            Console.WriteLine("The number of spaces are : {0}",this.m_num1+this.m_num2);
        }


        private int m_num1;
        private int m_num2;

    };

    internal class START : ASSIGNMENT {
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
}
