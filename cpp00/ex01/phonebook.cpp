/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:16:25 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/05 20:55:07 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::add_new_cont(Contact user[8], int indx)
{
	int add;

	add = 0;
    std::string input;
    std::cout << "To add a new contact please enter the follwing information :"<< std::endl;
    std::cout << "First name :";
    std::getline(std::cin, input);
	if (input.empty())
		add++;
    user[indx % 8].setFirstName(input);
	user[indx % 8].getFirstName();
    std::cout << "Last name :";
    std::getline(std::cin, input);
	if (input.empty())
		add++;
    user[indx % 8].setLastName(input);
    std::cout << "Nickname :";
    std::getline(std::cin, input);
	if (input.empty())
		add++;
    user[indx % 8].setNickName(input);
    std::cout << "Phone number :";
    std::getline(std::cin, input);
	if (input.empty())
		add++;
    user[indx % 8].setPhoneNumber(input);
    std::cout << "Darkest secret :";
    std::getline(std::cin, input);
	if (input.empty())
		add++;
    user[indx % 8].setDaekestSecret(input);
    std::cout << "Thanks for your time!!" << std::endl;
	if (add > 0)
	{
		clear_an_accont (user, indx);
		return (-1);
	}
	return (0);
}

int main(void)
{
    std::cout<< "WELCOME TO THE 80's\nPlese enter a command (ADD, SEARCH or EXIT): ";
    PhoneBook emty;
	int	indx;
	int	status;
    int num;
        std::string in_put;

	indx = 0;
    num = indx;
	int i =0;
    while (1)
    {
        std::getline (std::cin, in_put);
        if (in_put == "EXIT")
            return (0);
        else if (in_put == "ADD")
        {
            status = emty.add_new_cont(emty.my_phonebook, indx);
			if (status == -1)
				indx--;
			indx++;
			std::cout<< "awesomephonebook$>";
        }
        else if (in_put == "SEARCH")
        {
			std::cout << "##$"<< in_put << "#$$#" << std::endl;
            if (emty.my_phonebook->getFirstName().empty())
            {
                std::cout << "No saved contact yet!!" << std::endl;
                std::cout<< "awesom##ephonebook$>";
            }
            else
            {
                print_table (emty.my_phonebook);
				std::cout << in_put << "#$$#" << std::endl;
                std::cout<< "searching$>";
				std::cout << "##$"<< in_put << std::endl;
                std::cin >> num;
				std::cout << "num" << num << "lkmaya" << std::endl;
                if (num > 0 && num < 9)
                    print_an_contact (emty.my_phonebook, num);
                else
                    std::cout << "NON-CONTACT ID!" << std::endl;
				in_put.clear();
            }
        }
		else if (in_put.empty())
		{
			std::getline (std::cin, in_put);
			std::cout<< "awesomephonebook$>";
		}
		// else
		// 	std::cout << "awesome>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>phonebook$>                $$" << in_put << num << std::endl;
		// std::cout << "hahwa===================>" << in_put << std::endl;
		i++;
		if (i > 11)
		{
			std::cout << "jbto\n" << in_put << "!@";
			break ;
		}
    }
}
