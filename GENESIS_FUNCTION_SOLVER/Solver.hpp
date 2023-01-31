#pragma once

#include <stack>
#include <queue>
#include <string>
#include <iostream>

class Solver
{
public:
	Solver();
	~Solver();

	void input();
	void infix();

	const char ASCII = '0';
private:
	std::string _input;
	std::stack<char> _stack;
	//std::queue<char> _queue;
	std::queue<int> _queue;
	std::string operators = "*/+-";
};