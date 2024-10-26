/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:49:25 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 17:51:18 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>()
{
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(MutantStack const &rhs) : std::stack<T, Container>(rhs)
{
}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(MutantStack const &rhs)
{
	if (this != &rhs)
		std::stack<T, Container>::operator=(rhs);
	return *this;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
	return std::stack<T, Container>::c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
	return std::stack<T, Container>::c.end();
}