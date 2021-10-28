#include <iostream>
#include <fstream>
using namespace std;

const int N = 64;

void printArray (int const *ptr, size_t len);
void makeArray(int a[], int N);
int linearSearch(int a[], int N, int target);
int binarySearch(int a[], int N, int target);
void sortArray(int a[], int N);


int main()
{
    int nums[N];

        makeArray(nums, N);
       printArray(nums, N); 

}

void printArray(int const *ptr, size_t len)        
{                    
    for( int i = 0; i < len; ++i )      
    cout << ptr[i] << endl;        
}   

void makeArray(int a[], int N) {
    for( int i = 0; i < N; ++i )      
    a[i] = rand() % 100 + 1;
}
int linearSearch(int a[], int N, int target);
int binarySearch(int a[], int N, int target);
void sortArray(int a[], int N);

