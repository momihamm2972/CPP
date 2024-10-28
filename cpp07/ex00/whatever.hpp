/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:19:13 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 00:34:07 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	swap(T& value0, T& value1)
{
	T swp = value0;
	value0 = value1;
	value1 = swp;
}

template <typename T>
T	min(T value0, T value1)
{
	if (value0 < value1)
		return (value0);
	return(value1);
}

template <typename T>
T	max(T value0, T value1)
{
	return((value0 > value1) ? value0 : value1);
}