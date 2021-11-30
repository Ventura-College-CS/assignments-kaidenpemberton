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
int top;
	Stack()
	{
		top = size();
		//pool.reserve(capacity); 
	}	
	/*Stack(int size)
	{
		pool.reserve(size);
	}*/
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
	T peek()
	{
        return pool[top];
	}

};

#endif 
