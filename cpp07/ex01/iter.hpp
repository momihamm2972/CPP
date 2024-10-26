/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:21:30 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 17:21:56 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T, typename F>
void	iter(T*	arr, size_t len, F func)
{
	if (!arr || !func)
		return ;
	for (size_t i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

template<typename T>
void	printType(T i)
{
	std::cout << i << std::endl;
}