/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:38:04 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 17:39:02 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfinde(T& container, int a)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), a);
	if (it != container.end())
		return it;
	throw std::exception();
}