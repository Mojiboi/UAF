#include <iostream>
#include <string>



using std::cout;
using std::string;
using std::cin;
using std::endl;



int main()
{
    for (size_t i = 1; i <= 6; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
       cout << endl;
    }

    return 0;
}