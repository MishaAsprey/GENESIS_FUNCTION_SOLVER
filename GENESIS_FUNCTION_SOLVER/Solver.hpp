#pragma once

#include <stack>
#include <queue>
#include <string>
#include <iostream>

#include <cmath>

class Solver
{
public:
	Solver();
	~Solver();

	void input();
	void postfix();
	int solve();

	const char ASCII = '0'; // used to convert ASCII numbers to integers
	const static char* h;
private:
	std::string _input;
	std::stack<char> _stack;
	std::queue<int> _queue;
	std::string operators = "*/+-";
};