/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:39:38 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/21 01:59:49 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mySed.hpp"

int main(int ac, char **av)
{
	int i = 1;
    std::string input;

	if (ac == 4)
	{
		std::ifstream infile;
		std::ofstream outfile;
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string s3 = av[1];

		infile.open(av[1]);
		if (!infile.is_open())
		{
			std::cout << "We cant find you file!!" << std::endl;
			return (0);
		}
		if (s1.empty())
		{
			std::cout << "pleas enter the orainal string to be replaced!!" << std::endl;
			return (0);
		}
		outfile.open(check_name(s3));
		while (i)
		{
			if ((std::getline(infile, input)).eof())
			{
				checkIfTher(outfile, input, s1, s2, 1);
				break;
			}
			checkIfTher(outfile, input, s1, s2, 0);
		}
	}
	else
		std::cout << "We can't support your argument" << std::endl;
}