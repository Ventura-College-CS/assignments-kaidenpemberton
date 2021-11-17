#include <iostream>
#include "stack.h"
#include "Postfix.h"

using namespace std;


int main()
{
     Postfix pf;
	const int N = 20;
	const int offset = 48;
	string postfix_exp = "243*+5+";
	Stack<int, N> stack;
	char input;

	int opr1, opr2, result;

	for (int i = 0; i < postfix_exp.size(); i++)
	{
		input = postfix_exp[i];
		if (isdigit(input))
			stack.push(int(input) - offset);
		else if (pf.isOperator(input))
		{
			opr1 = stack.pop();
			opr2 = stack.pop();
			result = pf.calcuate(opr1, opr2, input);
			stack.push(result);
		}
	}
	cout << "The result of the expression is " << stack.pop() << endl;
}
