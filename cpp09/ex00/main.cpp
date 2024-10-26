/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:53:59 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 17:55:38 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./bitcoin [file]" << std::endl;
		return 1;
	}
	try{
		BitcoinExchange::btcExchange(av[1], "data.csv");
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	return 0;
}