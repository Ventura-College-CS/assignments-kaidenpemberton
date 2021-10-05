#include <iostream>
using namespace std;

struct Students{
	int id;
	char name[10];

};

int main()
{
	int 	*ptr;
	int 	num=100;
	
	Students 	s;

	Students 	*sptr;

	sptr = new Students; // 2 fields, int, char [10] = 14 bytes 

	sptr->id = 10;
	
	s.id = 10;
	(*sptr).id  = 20;
	sptr->id = 20;




	ptr = &num; // basic use of pointer var.
	cout << *ptr << endl; // 100 

	ptr = new int; // points to new memory space ( 4bytes)
	*ptr = 200; 
	cout << *ptr << endl; // Garbage value -> 200 


	ptr = new int[10]; // allocates 10 x 4 bytes = continuous 40 bytes

	*ptr = 10; 
	*(ptr+4) = 20; 
	*(ptr+8) = 30; 
	
	for(int i=0; i<10; i++)
		cout << *(ptr+i) << endl;
	cout << endl;	

}