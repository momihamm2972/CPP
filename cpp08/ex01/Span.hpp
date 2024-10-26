/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:40:50 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 17:43:14 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <cstdlib> 

class Span
{
	private:
		unsigned int N;
		std::vector<int> v;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span();

		/* member functions */
		void			addNumber(int n);
		template<typename Iterator>
		void			generateNumbers(Iterator begin, Iterator end)
		{
			if (this->v.size() + std::distance(begin, end) > this->N)
				throw std::exception();
			this->v.insert(this->v.end(), begin, end);
		}
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		unsigned int	size() const;
		std::vector<int> getVector() const;
};