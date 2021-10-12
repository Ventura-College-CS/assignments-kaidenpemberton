#include <iostream>
#include <fstream>
using namespace std;

void printArray (int **ptr);
void fillupArray (int **ptr);

int main()
{
    int *numbers[10];

    fillupArray (numbers);
    printArray(numbers); 
}

void printArray(int **ptr)        
{                    
    for( int i = 0; i < 10; ++i )      
        cout << *ptr[i] << endl;        
}   

void fillupArray (int **ptr) 
{
    for( int i = 0; i < 10; ++i )      
        ptr[i] = new int(rand() % 100);
}
