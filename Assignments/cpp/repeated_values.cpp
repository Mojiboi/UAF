#include <iostream>
#include <string>



using std::cout;
using std::string;
using std::cin;
using std::endl;



int main()
{
    int itr = 0;
    int i = 0;
    int temp = 0;
    unsigned int Size = 0;
    cout << "enter the number of elements you want to enter: ";
    cin >> Size;
    int array[Size];

    for (size_t i = 0; i < Size; i++)
    {
        cout << "enter a element: ";
        cin >> array[i];
    }
    cout<<"The repeated values are: "<<endl;
    for (size_t i = 0; i < Size; i++)
    {
        for (size_t j = i+1; j < Size; j++)
        {
            if(array[i]==array[j])
            {
                cout << array[j] << " ";
            }
        }
    }
    cout<<endl;

    return 0;
}