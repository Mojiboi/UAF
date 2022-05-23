#include <iostream>
#include <string>


using namespace std;




int main()
{   
    unsigned int Size = 0;
    int i = 0;
    cout << "enter the number of elements you want to enter: ";
    cin >> Size;
    int array[Size];

    for (size_t i = 0; i < Size; i++)
    {
        cout << "enter a element: ";
        cin >> array[i];
    }
    while(i<Size)
    {
        cout << array[i] << endl;
        i++;
    }



    return 0;
}