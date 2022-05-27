#include <iostream>
#include <string>



using namespace std;



int main()
{   
    unsigned int Size = 0;
    int fac = 0;
    int num ;
    cout << "enter the number of elements you want to enter: ";
    cin >> Size;
    int array[Size];

    for (size_t i = 0; i < Size; i++)
    {
        cout << "enter a element: ";
        cin >> array[i];
    }

    for (size_t i = 0; i < Size; i++)
    {
        fac = array[i];
        num = array[i];
        while (array[i]!=2)
        {
            fac = fac*--array[i];
        }
        cout << "The factorials of "<<num<<" is :" << fac << endl;
    }

    return 0;
}