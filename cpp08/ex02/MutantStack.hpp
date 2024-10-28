/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:49:23 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 11:51:16 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <vector>
#include <iostream>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
		public:
			MutantStack();
			MutantStack(MutantStack const &obj);
			MutantStack &operator=(MutantStack const &obj);
			~MutantStack();
			typedef typename std::stack<T, Container>::container_type::iterator iterator;
			iterator begin();
			iterator end();
};

#include "MutantStack.tpp"