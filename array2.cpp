#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int numbers[size] = { 5,7,2,4,6,7,10,1,3,9};

	for(int i=1; i< size-1; i++ )
	{
		if (( numbers[i-1] < numbers[i] ) &&  (numbers[i] < numbers[i+1] ))
			cout << numbers[i] << " has the increasing order\n";
	}

}