#ifndef 	STACK_H
#define 	STACK_H

#include <vector>
using namespace std;

template<class T> 
class Stack
{

private:
	vector<T>  pool;
public:
	stack(int size)
{
    arr = new int[size];
    capacity = size;
    top = -1;
}
 
// Destructor to free memory allocated to the stack
~stack() {
    delete[] arr;
}
	T pop() 
	{
		T val = pool.back();
		pool.pop_back();
		return val;
	}
	void push(T v)
	{
		pool.push_back(v); 
	}
	bool isEmpty()
	{
		return pool.empty();
	}
	int size() 
	{
		return pool.size();
	}
	int peek()
{
    if (!isEmpty()) {
        return arr[top];
    }
    else {
        exit(EXIT_FAILURE);
    }
}

};

#endif 
