#include "Solver.hpp"

const char* Solver::h = "0";

Solver::Solver() {}
Solver::~Solver() {}

void Solver::input()
{
	std::getline(std::cin >> std::ws, _input);
	std::cout << "Received Input: " << _input << std::endl;
	_input.insert(_input.end(), '?'); // string terminator
	postfix();
}



/// <summary>
/// numbers and opening brackets are inserted into _queue
/// operators and closing brackets are pushed onto the _stack
/// </summary>
void Solver::postfix()
{
	int temp = 0; // integer to be inserted into _queue

	for (int i = 0; i < _input.size(); i++)
	{
		if (_input[i] < '0' || _input[i] > '9')
		{
			/// <summary>
			/// the loop traverses _input backwards
			/// if: the outer loop finds an operator after a number
			/// stops if: it finds an operator or the beginning of the array
			/// used to: identify integers containing more than one digit
			/// 
			/// p = power
			/// k = iterator
			/// </summary>

			for (int k = i-1, p = 0; k >= 0 && _input[k] >= '0' && _input[k] <= '9'; --k, p++)
			{
				temp += (std::pow(10, p)) * (_input[k] - ASCII);
			}
			_queue.push(temp);
			if (_input[i] != '?')
				_stack.push(_input[i]);
			temp = 0;
		}
	}
	/// print
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

int Solver::solve()
{
	std::stack<int> temp;
	return 0;
}