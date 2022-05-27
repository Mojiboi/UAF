#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;


int main()
{
    string firts_name = "Moazzam";
    string last_name = "Mirza";
    string full_name = firts_name + last_name;

    for (size_t i = 1; i < 8; i++)
    {
        if(i==3)
            continue;
        if (i==6)
            break;
        cout << i <<": Hellow "<< full_name << " have a good day" << endl;
    }
    



    return 0;
}