/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:39:44 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/22 21:27:59 by momihamm         ###   ########.fr       */
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
	while (1)
	{
		found = input.find(acc);
		if ((unsigned long)found == std::string::npos)
		{
			if (line == 0 && ((unsigned long)found == std::string::npos))
				outfile << input << std::endl;
			else if (line != 0 && ((unsigned long)found == std::string::npos))
				outfile << input;
			break;
		}
		else
		{
			input.erase (found, acc.length());
			input.insert(found, rep);
			if (line == 0 && ((unsigned long)found == std::string::npos))
				outfile << input << std::endl;
			else if (line != 0 && ((unsigned long)found == std::string::npos))
				outfile << input;
		}
	}
	return (0);
}
