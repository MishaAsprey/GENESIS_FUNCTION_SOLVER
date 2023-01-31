#include "Solver.hpp"

Solver::Solver() {}
Solver::~Solver() {}

void Solver::input()
{
	//std::cin >> _input;
	std::getline(std::cin >> std::ws, _input);
	std::cout << "Received Input: " << _input << std::endl;
	infix();
}

void Solver::infix()
{
	/// numbers -> queue
	/// operators -> stack
	for (int i = 0; i < _input.size(); i++)
	{
		if (_input[i] >= '0' && _input[i] <= '9')
			_queue.push(_input[i] - ASCII);
		else
			_stack.push(_input[i]);
	}
	///print
	std::cout << "Stack: ";
	while (!_stack.empty())
	{
		std::cout << _stack.top();
		_stack.pop();
	}
	std::cout << std::endl << "Queue: ";
	while (!_queue.empty())
	{
		std::cout << _queue.front() << " ";
		_queue.pop();
	}
}