/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:01:42 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 18:04:03 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2) {
		std::cerr << "Usage: ./PmergeMe numbers" << std::endl;
		return 1;
	}
	PmergeMe p;
	std::string numbers = p.takingNumbers(av);
	if (numbers.empty() || numbers.find_first_of("0123456789") == std::string::npos)
		return (std::cerr << "Error" << std::endl, 1);
	std::cout << "before: " << numbers << std::endl;
	p.sortNumbersDeq(numbers);
	p.sortNumbersVec(numbers);
	return 0;
}