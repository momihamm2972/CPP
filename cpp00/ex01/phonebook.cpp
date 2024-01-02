/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:49:52 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/02 19:10:37 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "Contact.hpp"

void    PhoneBook::add_new_cont(Contact cont[8])
{
    (void) cont;
    std::cout << "To add a new contact please enter the follwing information :"<< std::endl;
    std::cout << "Please enter the first name :";
    std::getline(std::cin, cont[0].first_name);
    std::cout << "Please enter the last name :";
    std::getline(std::cin, cont[0].last_name);
    std::cout << "Please enter the nickname :";
    std::getline(std::cin, cont[0].nickname);
    std::cout << "Please enter the phone number :";
    std::getline(std::cin, cont[0].phone_number);
    std::cout << "Please enter the darkest secret :";
    std::getline(std::cin, cont[0].darkest_secret);
    std::cout << "thanks for your time!!" << std::endl;
}

int main(void)
{
    // (void)ac;
    // (void)av;
    std::cout<< "WELCOME TO THE 80's\nPlese enter a command (ADD, SEARCH or EXIT): ";
    PhoneBook empty;
    while (1)
    {
        std::string in_put;
        std::getline (std::cin, in_put);
        // std::cout<< in_put;
        if (in_put == "exit")
        {
            std::cout<< "kmi"<< std::endl;
            // empty.add_new_cont(empty.my_phonebook);
            return (0);
        }
        else if (in_put == "add")
        {
            // std::cout<< "add a new cont"<< std::endl;
            empty.add_new_cont(empty.my_phonebook);
        }
        else if (in_put == "search")
        {
            std::cout<< "search for an cont"<< std::endl;
        }
    }
}