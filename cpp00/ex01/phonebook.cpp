/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:49:52 by momihamm          #+#    #+#             */
/*   Updated: 2023/12/31 12:17:48 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "Contact.hpp"

// void    PhoneBook::add_new_cont(Contact cont)
// {
    
// }

int main(void)
{
    // (void)ac;
    // (void)av;
    std::cout<< "WELCOME TO THE 80's\nPlese enter a command (ADD, SEARCH or EXIT): ";
    while (1)
    {
        std::string in_put;
        std::getline (std::cin, in_put);
        // std::cout<< in_put;
        if (in_put == "exit")
        {
            // std::cout<< "kmi"<< std::endl;
            return (0);
        }
        else if (in_put == "add")
        {
            std::cout<< "add a new cont"<< std::endl;
        }
        else if (in_put == "search")
        {
            std::cout<< "search for an cont"<< std::endl;
        }
    }
}