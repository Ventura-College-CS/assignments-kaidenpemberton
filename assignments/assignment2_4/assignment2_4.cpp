#include <iostream>
#include <fstream>
using namespace std;

const int N = 10;

void printArray (double const *ptr, size_t len);

int main()
{
    double numbers[N] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.5,
    13.8, 14.7, 19.8, 20.0};

   /* The address of the first element of the array is set, 
      in my code as the initial value passed through the function,
      the address of the array is also known as the first item of that array. 
      That is since in memory, the addresses of the array follow the first value. */
    printArray(numbers, N); 
}

void printArray(double const *ptr, size_t len)        
{                    
    for( int i = 0; i < len; ++i )      
    cout << ptr[i] << endl;        
}   