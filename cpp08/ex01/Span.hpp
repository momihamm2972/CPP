/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:40:50 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 11:47:40 by momihamm         ###   ########.fr       */
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
		std::vector<int> _vec;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span();
		void			addNumber(int num);
		template<typename Iterator>
		void			generateNumbers(Iterator begin, Iterator end)
		{
			if (this->_vec.size() + std::distance(begin, end) > this->N)
				throw std::exception();
			this->_vec.insert(this->_vec.end(), begin, end);
		}
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		unsigned int	getSize() const;
		std::vector<int> getVector() const;
};