#include <iostream>

using namespace std;
    
const int N = 10;

void printArray (double *ptr);

int main()
{
    double numbers[N] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.5,
    13.8, 14.7, 19.8, 20.0};
    printArray(numbers); 
}


void printArray(double *ptr)
{  
    for ( int rep = 0; rep < (N); rep++ )
    {       
        cout << *ptr << endl;  
        *ptr++; 
    }     
}         