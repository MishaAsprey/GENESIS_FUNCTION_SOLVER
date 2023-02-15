#include <iostream>

#include "Solver.hpp"

int main()
{
	Solver solver;

	std::cout << "/// Evolutionary Algorithm Solver ///" << '\n'
		<< '\n'
		<< "[CONVENTIONS]: " << '\n'
		<< "1. Do not use spaces" << '\n'
		<< "2. Input must use infix notation" << '\n'
		<< "3. Multiplication must be explicitly shown using '*' at all times" << '\n'
		<< "[EXAMPLE]: 2+3*(x/1)=15" << '\n'
		<< '\n'
		<< "Input: ";

	solver.input();

	return 0;
}