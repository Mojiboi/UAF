#include <iostream>



using std::cout;
using std::endl;



int main()
{
    int a = 1,b = 5;
    int i = 0;
    cout<<"--------------------"<<endl;
    cout<<"a\tb"<<endl;
    cout<<"--------------------"<<endl;
    while(i<5)
    {
        cout<<a++<<"\t"<<b--<<endl;
        i++;
    }
    cout<<"--------------------"<<endl;

    return 0;
}