/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:38:04 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 05:50:07 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfinde(T& container, int val)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), val);
	if (it != container.end())
		return it;
	throw std::exception();
}