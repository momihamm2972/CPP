/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:57:39 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 20:17:01 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	operatorSymbol.clear();
}

RPN::~RPN()
{
}

RPN::RPN(const RPN& obj)
{
	*this = obj;
}

RPN& RPN::operator=(const RPN& obj)
{
	if (this != &obj)
	{
		operatorSymbol = obj.operatorSymbol;
		_stack = obj._stack;
	}
	return *this;
}

static int convert_char_to_int(char c)
{
	return c - '0';
}

void RPN::evaluate(std::string input)
{
	int result = 0;
	std::string str = "0123456789+-*/ ";
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input.find_first_not_of(str) != std::string::npos)
			return (std::cout << "Error" << std::endl, void());
		if (input[i] == ' ')
			continue;
		if (isdigit(input[i]))
			_stack.push(convert_char_to_int(input[i]));
		if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')
			operatorSymbol = input[i];
		if (_stack.size() > 1 && !operatorSymbol.empty())
		{
			int number_1 = _stack.top();
			_stack.pop();
			int number_2 = _stack.top();
			_stack.pop();
			if (operatorSymbol == "*")
				result = number_2 * number_1;
			else if (operatorSymbol == "+")
				result = number_2 + number_1;
			else if (operatorSymbol == "-")
				result = number_2 - number_1;
			else if (operatorSymbol == "/")
			{
				if (number_1 == 0)
				{
					std::cout << "Error: Cannot divide by zero." << std::endl;
					return;
				}
				result = number_2 / number_1;
			}
			_stack.push(result);
			operatorSymbol.clear();
		}
		else if (_stack.size() == 1 && !operatorSymbol.empty())
		{
			std::cout << "Error" << std::endl;
			return ;
		}
	}
	if (_stack.size() != 1)
	{
		std::cout << "Error" << std::endl;
		return ;
	}
		
	result = _stack.top();
	std::cout << result << std::endl;
}