#include <iostream>
#include <string>



using namespace std;


int main()
{
    int row;
    int column;
    cout<<"Please enter the number of rows: "<<endl;
    cin>>row;
    cout<<"Please enter the number of columns: "<<endl;
    cin>>column;

    int A[row][column];
    int B[row][column];
    int sum[row][column];
    cout<<"Please enter values for "<<row<<"x"<<column<<" matrix A: "<<endl;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        { 
            cin>>A[i][j];
        }
        cout << endl;
    }
    cout<<"Please enter values for "<<row<<"x"<<column<<" matrix B: "<<endl;

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        { 
            cin>>B[i][j];
        }
        cout << endl;
    }
    cout<<"The Sum of matrix A & B is: "<<endl;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        { 
            sum[i][j] = A[i][j]+B[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}