/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:57:36 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 17:58:07 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./RPN \"[expression]\"" << std::endl;
		return 1;
	}
	RPN rpn;
	rpn.rpn(av[1]);
	return 0;
}