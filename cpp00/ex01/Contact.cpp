/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:39:28 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/05 20:16:31 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
// #include "Contact.hpp"

void	print_an_contact(Contact info[8], int indx)
{
    indx--;
    if (info[indx].getFirstName().empty())
    {
        std::cout << "Ther is non-contact whit this ID!!\n";
        return ;
    }
    std::cout << "First Name : " << info[indx].getFirstName() << std::endl;
    std::cout << "Last Name : " << info[indx].getLastName() << std::endl;
    std::cout << "Nickname : " << info[indx].getNickname() << std::endl;
    std::cout << "Phone Number : " << info[indx].getPhoneNumber() << std::endl;
    std::cout << "Dark Secret : " << info[indx].getDarkSecret() << std::endl;
}

void    print_table(Contact info[8])
{
    (void)info;
    int indx;

    indx = -1;
    while (indx < 8)
    {
        std::cout << "---------------------------------------------" << std::endl;
        if (indx == -1)
            std::cout << "|   indx   |First Name|Last Name | Nickname |" << std::endl;
        else
        {
            if (info[indx].getFirstName().empty())
            {
                // std::cout << "----------------------------------------------------------" << std::endl;
                return ;
            }
            std::cout << "|     " << indx + 1 << "    |";
            if (info[indx].getFirstName().length() > 10)
                std::cout << info[indx].getFirstName().substr(0, 9) << ".|";
            else
                std::cout << std::setw(10) << info[indx].getFirstName();
            if (info[indx].getLastName().length() > 10)
                std::cout << info[indx].getLastName().substr(0, 9) << ".|";
            else
                std::cout << "|" << std::setw(10) << info[indx].getLastName();
            if (info[indx].getNickname().length() > 10)
                std::cout << info[indx].getNickname().substr(0, 9) << ".|" << std::endl;
            else
                std::cout << "|" << std::setw(10) << info[indx].getNickname() << "|" << std::endl;
        }
        indx++;
    }
    std::cout << "---------------------------------------------" << std::endl;
    // std::cout << "|   indx   |  First Name  |   Last Name   |   Nickname   |" << std::endl;
    // std::cout << "----------------------------------------------------------" << std::endl;
}

void	print_all_contact(Contact info[8])
{
    int indx;
    std::string test;
    indx = 0;
    while (indx < 8)
    {
        // std::cout << "|   indx   |First Name|Last Name | Nickname |" << std::endl;
        std::cout << "contact num " << indx + 1 << std::endl;
        std::cout << "First Name : " << info[indx].getFirstName() << std::endl;
        std::cout << "Last Name : " << info[indx].getLastName() << std::endl;
        std::cout << "Nickname : " << info[indx].getNickname() << std::endl;
        std::cout << "Phone Number : " << info[indx].getPhoneNumber() << std::endl;
        std::cout << "Dark Secret : " << info[indx].getDarkSecret() << std::endl;
        indx++;
    }
}

void	clear_an_accont(Contact info[8], int indx)
{
	std::string empty_str;
	empty_str.clear();
    info[indx].setFirstName(empty_str);
    info[indx].setLastName(empty_str);
    info[indx].setNickName(empty_str);
    info[indx].setPhoneNumber(empty_str);
    info[indx].setDaekestSecret(empty_str);
    std::cout << "Warning : this contact has an empty field, please enter all information to save a new contact.By Odin, by Thor! Use your brain!!!" << std::endl;
}
