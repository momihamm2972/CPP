/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:16:25 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/15 19:25:55 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int ft_atoi_pp(std::string str)
{
    int indx;
    int result;
    int sing;
    
    indx = 0;
    result= 0;
    sing = 1;
    while(str[indx])
    {
        if (str[indx] == '+' || str[indx] == '-')
        {
            if (str[indx] == '-')
            {
                sing *= -1;
                indx++;
            }
        }
        if (!(str[indx] >= '0' && str[indx] <= '9'))
            return (-1);
        result = (result * 10) + str[indx] - '0';
        indx++;
    }
    return (result * sing);
}

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
    PhoneBook	emty;
    std::string	in_put;
	int			indx;
	int			status;
    int			num;

	indx = 0;
    num = indx;
    std::cout<< "\n                                        WELCOME TO THE 80's\n\nPlese enter a command (ADD, SEARCH or EXIT): ";
    while (1)
    {
        if (!std::getline (std::cin, in_put))
            break ;
        if (in_put == "EXIT")
            return (0);
        else if (in_put == "ADD")
        {
            status = emty.add_new_cont(emty.my_phonebook, indx);
			if (status == -1)
				indx--;
			indx++;
            in_put.clear();
        }
        else if (in_put == "SEARCH")
        {
            if (emty.my_phonebook->getFirstName().empty())
            {
                std::cout << "No saved contact yet!!" << std::endl;
                // std::cout<< "awesomephonebook$>";
            }
            else
            {
                print_table (emty.my_phonebook);
                std::cout<< "searching$>";
                std::getline (std::cin, in_put);
                num = ft_atoi_pp(in_put);
                if (num > 0 && num < 9)
                    print_an_contact (emty.my_phonebook, num);
                else
                    std::cout << "NON-CONTACT ID!"<< std::endl;
				in_put.clear();
            }
        }
		else if (in_put.empty())
		{
            std::cout<< "awesomephonebook$>";
			std::getline (std::cin, in_put);
		}
        else
            std::cout << "awesomephonebook: command not found!!\n";
        std::cout<< "awesomephonebook$>";
    }
}
