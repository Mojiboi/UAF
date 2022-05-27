#include <iostream>
#include <string>



using std::cout;
using std::string;
using std::cin;
using std::endl;


int main()
{

    int min1,min2,Size;
    cout << "enter the number of elements you want to enter: ";
    cin >> Size;
    int array[Size];
    
    for (size_t i = 0; i < Size; i++)
    {
        cout << "enter a element: ";
        cin >> array[i];
    }

    if (array[0]<array[1])
    {
        min1 = array[0];
        min2 = array[1];
    }
    else
    {
        min1 = array[1];
        min2 = array[0];
    }
    for (size_t i = 2; i < Size; i++)
    {
        if(array[i]<min1)
        {
            min2 = min1;
            min1 = array[i];
        }else if (array[i]<min2 && array[i]>min1)
        {
            min2 = array[i];
        }
        
    }

    cout<<"The second smallest number is : "<<min2<<endl;

    return 0;
}