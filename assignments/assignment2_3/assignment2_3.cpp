#include <iostream>

using namespace std;
    
const int N = 10;

void printArray (double *ptr);

int main()
{
    double numbers[N] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.5,
    13.8, 14.7, 19.8, 20.0};

   /* The address of the first element of the array is set
    in my code as the initial value passed through the function,
    the address of the array is also known as the first item of that array. 
    That is since in memory, the addresses of the array follow the first value. */
    printArray(numbers); 
}


void printArray(double *ptr)
{  
    for ( int rep = 0; rep < (N); rep++ )
    {       
        /*
        The pointer arithmetic expression that is denoting
        the rep_th element in the array 
        | | |
        v v v
        */
        cout << *ptr << endl;  
        *ptr++; 
    }     
}         