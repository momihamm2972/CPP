/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:21:30 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 01:36:32 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T, typename F>
void	iter(T*	arrOfThings, size_t lenght, F fun)
{	
	if (!arrOfThings || !fun)
		return ;
	for (size_t index = 0; index < lenght; index++)
	{
		fun(arrOfThings[index]);
	}
}

template<typename T>
void	printType(T thing)
{
	std::cout << thing << std::endl;
}