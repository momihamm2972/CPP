/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:19:57 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/24 23:21:06 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

ScalarConverter::ScalarConverter()
{
    
}

ScalarConverter::ScalarConverter(std::string __input) : input(__input)
{

}

ScalarConverter::ScalarConverter(const ScalarConverter & obj)
{
    *this = obj;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter & obj)
{
    this->input = obj.input;
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    
}

static void	isInt(const std::string& input)
{
	for (int index = 0; input[index]; i++)
	{
		if (i == 0 && (input[index] == '-'  || input[index] == '+') && input.length() > 1)
			continue;
		if (!std::isdigit(input[index]))
			throw std::invalid_argument("Error: Invalid input");
	}
}

static void	isFloat(const std::string& input)
{
	int point = 0;
	for (int index = 0; input[index]; index++)
	{
		if (index == 0 && (input[index] == '-'  || input[index] == '+') && input.length() > 1)
			continue;
		if (input[index] == '.' || input[index] == 'f')
		{
			index == 0 && input[index] == 'f' ?
			throw std::invalid_argument("Error: Invalid input") : index;
			point++;
			point > 2 ?
			throw std::invalid_argument("Error: Invalid input") : point;
			continue;
		}
		if (!std::isdigit(input[index]))
			throw std::invalid_argument("Error: Invalid input");
	}
}

static void	isDouble(const std::string& input)
{
	int point = 0;
	for (int index = 0; input[index]; index++)
	{
		if (index == 0 && (input[index] == '-'  || input[index] == '+') && input.length() > 1)
			continue;
		if (input[index] == '.')
		{
			point++;
			point > 1 ?
			throw std::invalid_argument("Error: Invalid input") : point;
			continue;
		}
		if (!std::isdigit(input[index]) || point > 1)
			throw std::invalid_argument("Error: Invalid input");
	}
}

static void	isChar(const std::string& input)
{
	if (input.length() > 1 || !std::isprint(input[0]))
		throw std::invalid_argument("Error: Invalid input");
}

