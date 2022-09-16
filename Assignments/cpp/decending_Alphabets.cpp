#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char alpha = 'A';
    int height;
    int i = 1;
    cout<<"please enter the the height of triangle: ";
    cin>>height;
    while (i<=height)
    {

        for (int j = 1; j <= i; j++)
        {
            cout<<char(alpha+j-1)<<" ";
        }
        cout<<endl;
        i++;
    }


    return 0;
}