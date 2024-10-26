/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:19:57 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 06:47:42 by momihamm         ###   ########.fr       */
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
	for (int index = 0; input[index]; index++)
	{
		if (index == 0 && (input[index] == '-'  || input[index] == '+') && input.length() > 1)
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

static int	types(const std::string& input)
{
	if (input.length() == 1 && !std::isdigit(input[0]))
		return (CHAR);
	else if (input.find('.') != std::string::npos)
	{
		if (input.find('f') != std::string::npos)
			return (FLOAT);
		return (DOUBLE);
	}
	return (INT);
}

static std::string	toLower(const std::string& input)
{
	std::string tmp = "";
	for (int i = 0; input[i]; i++)
		tmp += std::tolower(input[i]);
	return (tmp);
}

static int	getInput(const std::string& input)
{
	int i = 0;
	std::string s = toLower(input);
	char infinity[7][6] = {"nan", "nanf", "+inf", "+inff", "-inf", "-inff"};
	for (; i < 7 && s != infinity[i]; i++);
	return (i);
}

static void	infinPrint(const std::string& input_0, const std::string& input_1)
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << input_0 << std::endl;
	std::cout << "double: " << input_1 << std::endl;
}

static void	isInfinity(const std::string& input)
{
	int index = getInput(input);
	switch (index)
	{
		case 0:
		case 1:
			infinPrint("nanf", "nan");
			exit(0);
		case 2:
		case 3:
			infinPrint("+inff", "+inf");
			exit(0);
		case 4:
		case 5:
			infinPrint("-inff", "-inf");
			exit(0);
		default:
			break;
	}
}

void	ScalarConverter::convert(const std::string& input)
{
	ScalarConverter converter(input);
	isInfinity(input);
	int type = types(input);
	switch (type)
	{
		case CHAR:
			isChar(input);
			converter.charCovert();
			break;
		case INT:
			isInt(input);
			converter.intCovert();
			break;
		case FLOAT:
			isFloat(input);
			converter.floatCovert();
			break;
		case DOUBLE:
			isDouble(input);
			converter.doubleCovert();
			break;
		default:
			std::cout << "Error: Invalid input" << std::endl;
			break;
	}
}

static void	typesResult(char c, int i, float f, double d)
{
	if (i < 0 || i > 127)
		std::cout << "char: " << "impossible" << std::endl;
	else if (i < 32 || i >= 127)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << "\'" << c << "\'" << std::endl;
	std::cout << "int: " << i << std::endl;
	if (f - i == 0)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	if (d - i == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}
// input= 6.5>> i=6 f=6.5f || inp=6 ==> i=6 f=6.0f

void	ScalarConverter::charCovert()
{
	char c = input[0];
	int i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);
	typesResult(c, i, f, d);
}

void	ScalarConverter::intCovert()
{
	long nb = std::atol(input.c_str());
	if (nb > INT_MAX || nb < INT_MIN)
		throw std::invalid_argument("Error: Invalid input");
	char	c = static_cast<char>(nb);
	float	f = static_cast<float>(nb);
	double	d = static_cast<double>(nb);
	typesResult(c, nb, f, d);
}

void	ScalarConverter::floatCovert()
{
	float	f = std::atof(input.c_str());
	int		i = static_cast<int>(f);
	char	c = static_cast<char>(f);
	double	d = static_cast<double>(f);
	typesResult(c, i, f, d);
}

void	ScalarConverter::doubleCovert()
{
	double	d = std::atof(input.c_str());
	char	c = static_cast<char>(d);
	int		i = static_cast<int>(d);
	float	f = static_cast<float>(d);
	typesResult(c, i, f, d);
}