/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:49:52 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/03 19:02:45 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "Contact.hpp"

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
    PhoneBook empty;
	int	indx;
	int	status;

	indx = 0;
    while (1)
    {
        std::string in_put;
        std::getline (std::cin, in_put);
        if (in_put == "exit")
        {
            std::cout<< "********************************************kmi*****************************************"<< std::endl;
			print_all_contact (empty.my_phonebook);
            return (0);
        }
        else if (in_put == "add")
        {
            status = empty.add_new_cont(empty.my_phonebook, indx);
			if (status == -1)
				indx--;
			indx++;
			std::cout<< "awesomephonebook$>";
        }
        else if (in_put == "search")
        {
            std::cout<< "search for an cont"<< std::endl;
        }
		else
			std::cout<< "awesomephonebook$>";
    }
}