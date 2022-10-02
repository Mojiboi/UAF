#include <iostream>
#include <string>



using std::cout;
using std::string;
using std::cin;
using std::endl;

/*
1-> get ten numbers as input in array
2-> find average of these number 
3-> find number of the number greater than average
*/

void avgOrMaxNum(int array[],int size,string choice)
{
    int sum = 0;
    int num = 0;
    float avg;
    if(choice == "0") {
        for(int i = 0; i< size; i++)
        {
            sum = sum+array[i];
        }
        avg = sum/size;
        cout << "The average is: " << avg << endl;
    }

    if(choice == "1") {
        for(int i = 0; i< size; i++)
        {
            sum = sum+array[i];
        }
        avg=sum/size;
        num = 0;
        for(int i = 0; i< size; i++)
        {
            if(array[i]>avg)
            {
                num++;

            } 
        }
        cout << "The number of elements greater then avg is: " << num << endl;

    }
    
    
}

int main()
{
    //sice array start with 0 index so it will store 10 values
    int array[10];
    /*
    sizeof function use kia hai hum integer array ly rahay or ek int 4 bytes ka hota hai
    to or hummari array 10 integers ko store krwa rhi to to sizeof(array)=4*10=40 or sizeof(array[0]) = 4 
    so 40/4 = 10 which is the exact size of array
    */ 
    int size = sizeof(array)/sizeof(array[0]); 

    cout << "Enter a number : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << i << " : "; 
        cin>>array[i];    
    }
    avgOrMaxNum(array,size,"0");
    avgOrMaxNum(array,size,"1");

    return 0;
}