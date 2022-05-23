#include <iostream>
#include <string>



using std::cout;
using std::string;
using std::cin;
using std::endl;



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
    char choose;
    bool n = true;
    while(n)
    {
        _IsEven0dd();
        cout << "do you want to check again Enter y for yes :";
        cin >> choose;
        if((choose!='Y') && (choose!='y')){
            cout << "Exiting...!" << endl;
            n = false;
        }
    }
    return 0;
}