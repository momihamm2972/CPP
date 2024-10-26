/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:40:47 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 17:41:30 by momihamm         ###   ########.fr       */
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
		this->v = obj.v;
		this->N = obj.N;
	}
	return (*this);
}

Span::~Span()
{
}

unsigned int Span::size() const
{
	return (this->N);
}

void	Span::addNumber(int n)
{
	if (this->v.size() == this->N)
		throw std::exception();
	this->v.push_back(n);
}

unsigned int	Span::shortestSpan()
{
	std::vector<int> tmp;

	if (this->v.size() < 2)
		throw std::exception();
	std::sort(this->v.rbegin(), this->v.rend());
	for (std::vector<int>::iterator it = this->v.begin(); it != this->v.end(); it++)
	{
		if (it + 1 != this->v.end())
			tmp.push_back(*it - *(it + 1));
	}
	unsigned int	min = *std::min_element(tmp.begin(), tmp.end());
	return (min);
}

unsigned int	Span::longestSpan()
{	
	if (this->v.size() < 2)
		throw std::exception();
	int min = *std::min_element(this->v.begin(), this->v.end());
	int max = *std::max_element(this->v.begin(), this->v.end());
	return (max - min);
}

std::vector<int> Span::getVector() const
{
	return (this->v);
}