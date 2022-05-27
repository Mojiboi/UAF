#include <iostream>
#include <cstring>
#include <string>




using std::cout;
using std::string;
using std::cin;
using std::endl;



int main()
{
    int rev = 0;
    int remainder;
    int q;
    int num;
    cout<<"please enter a number : ";
    cin>>num;
    q = num;
    while (q!=0){
        remainder = q%10;
        rev = (rev*10)+remainder;
        q = q/10;
    }
    if (rev==num)
    {
        cout<<"The given number is palindrome :"<< num <<" = "<<rev<<endl;
    }else
    {
        cout<<"The given number is not a palindrome :"<< num <<" != "<<rev<<endl;
    }
    

    return 0;
}