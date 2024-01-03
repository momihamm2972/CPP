/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:39:28 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/03 21:33:36 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "Contact.hpp"

void	print_all_contact(Contact info[8])
{
    int indx;
    std::string test;
    indx = 0;
    while (indx < 8)
    {
        std::cout << "|   indx   |First Name|Last Name | Nickname |" << std::endl;
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
}
