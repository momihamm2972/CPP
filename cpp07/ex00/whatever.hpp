/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:19:13 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 17:20:06 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T	tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T a, T b)
{
	return((a < b) ? a : b);
}

template <typename T>
T	max(T a, T b)
{
	return((a > b) ? a : b);
}