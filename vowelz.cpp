#include <iostream>
#include <string>



using std::cout;
using std::string;
using std::cin;
using std::endl;



int main()
{
    char choose;
    // cout << "Enter y for yes :";
    // cin >> choose;
    // while(choose=='Y'||choose=='y')
    // {
    //     cout << "Hellow Moazzam..!" << endl;
    //     cout << "Enter y for yes :";
    //     cin >> choose;
    // }

    do
    {
        cout << "please enter a character:";
        cin >> choose;

    } while(choose=='a'||choose=='A'||choose=='e'||choose=='E'||choose=='i'||choose=='I'||choose=='o'||choose=='O'||choose=='u'||choose=='U');
    



    return 0;
}
