/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:40:47 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 16:57:36 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0)
{
}

Span::Span(unsigned int N) : N(N)
{
}

Span::Span(const Span& obj)
{
	*this = obj;
}

Span& Span::operator=(const Span& obj)
{
	if (this != &obj)
	{
		this->_vec = obj._vec;
		this->N = obj.N;
	}
	return (*this);
}

Span::~Span()
{
}

unsigned int Span::getSize() const
{
	return (this->N);
}

void	Span::addNumber(int num)
{
	if (this->_vec.size() == this->N)
		throw std::exception();
	this->_vec.push_back(num);
}

unsigned int	Span::shortestSpan()
{
	std::vector<int> tmp;

	if (this->_vec.size() < 2)
		throw std::exception();
	std::sort(this->_vec.rbegin(), this->_vec.rend());
	for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); it++)
	{
		if (it + 1 != this->_vec.end())
			tmp.push_back(*it - *(it + 1));
	}

	return (*std::min_element(tmp.begin(), tmp.end()));
}

unsigned int	Span::longestSpan()
{	
	if (this->_vec.size() < 2)
		throw std::exception();
	int min = *std::min_element(this->_vec.begin(), this->_vec.end());
	int max = *std::max_element(this->_vec.begin(), this->_vec.end());
	return (max - min);
}

std::vector<int> Span::getVector() const
{
	return (this->_vec);
}