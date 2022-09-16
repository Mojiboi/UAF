#include <iostream>
#include <string>



using std::cout;
using std::string;
using std::cin;
using std::endl;



void _Gst()
{   
    int salary;
    cout << "Please enter your salary: ";
    cin>>salary;
    float gst;
    if (salary<=50000)
    {

        gst = salary*10/100;
        cout << "Income after applaying tax :" << salary - gst<< endl;
    }
    else
    {
        gst = salary*16/100;
        cout << "Income after applaying tax :" <<salary - gst<<endl;

    }
}



void _IsLeapYear()
    {
        int year;
        cout<<"enter a year : ";
        cin>>year;
        if(year%4==0)
        {
            cout << "The given year : " <<year<<" is leap"<<endl;

        }
        else
        {
            cout << "The given year : " <<year<<" is not leap"<<endl;
            
        }
    };



void _IsEven0dd()
    {
        int number;
        cout<<"enter a number : ";
        cin>>number;
        if(number%2==0)
        {
            cout << "The given number : " <<number<<" is Even"<<endl;

        }
        else
        {
            cout << "The given number : " <<number<<" is odd"<<endl;
            
        }
    };

int main()
{
    
    _IsEven0dd();
    _Gst();
    _IsLeapYear();

    return 0;
}