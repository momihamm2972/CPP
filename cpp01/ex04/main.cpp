/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:39:38 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/22 21:28:16 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mySed.hpp"

int main(int ac, char **av)
{
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
		if (s1 == s2)
		{
			while (1)
			{
				if (!(std::getline(infile, input)).eof())
					outfile << input << std::endl;
				else
				{
					outfile << input;
					break;
				}
			}
		}
		else
		{
			while (1)
			{
				if ((std::getline(infile, input)).eof())
				{
					checkIfTher(outfile, input, s1, s2, 1);
					break;
				}
				checkIfTher(outfile, input, s1, s2, 0);
			}
		}
	}
	else
		std::cout << "We can't support your argument" << std::endl;
}