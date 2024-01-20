/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:39:44 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/20 03:10:19 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mySed.hpp"

int	my_len(std::string input)
{
	int len;

	len = 0;
	while (input[len] && input[len] != '.')
		len++;
	return (len);
}

std::string	check_name(std::string name)
{
	return (name.erase(my_len(name), name.length()) + ".replace");
}

int	checkIfTher(std::ofstream& outfile, std::string input, std::string acc, std::string rep, int line)
{
	int	found = 0;
(void)rep;
	while (input[found] != '\0')
	{
		found = input.find(acc);
		if ((unsigned long)found == std::string::npos)
		{
			// std::cout << "dkhel  " << input << std::endl;
			if (line == 0)
				outfile << input << std::endl;
			else
				outfile << input;
			// return (-1);
		}
		else
		{
			std::cout << "Befor " << input << std::endl;
			input.erase (found, acc.length());
			std::cout << "erase " << input << std::endl;
			input.insert(found, rep);
			std::cout << "insert " << input << std::endl;
			if (line == 0)
				outfile << input << std::endl;
			else
				outfile << input;
			// std::cout << "After" << input << std::endl;
		}
	}
	return (0);
}
