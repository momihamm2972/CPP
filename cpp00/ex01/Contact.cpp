/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:39:28 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/16 19:39:10 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

    Contact::Contact()
	{
        // std::cout<< first_name;
		first_name.empty ();
		last_name.empty ();
		nickname.empty ();
		phone_number.empty ();
		darkest_secret.empty ();
	}

    Contact::~Contact()
	{
		first_name.clear ();
		last_name.clear ();
		nickname.clear ();
		phone_number.clear ();
		darkest_secret.clear ();
	}

	/*geters*/
	std::string	Contact::getFirstName()
	{
		return (this->first_name);
	}
	std::string	Contact::getLastName()
	{
		return (this->last_name);
	}
	std::string	Contact::getNickname()
	{
		return (this->nickname);
	}
	std::string	Contact::getPhoneNumber()
	{
		return (this->phone_number);
	}
	std::string	Contact::getDarkSecret()
	{
		return (this->darkest_secret);
	}
	/********/
	/*seters*/
	void	Contact::setFirstName(std::string newFirstName)
	{
		first_name = newFirstName;
	}
	void	Contact::setLastName(std::string newLastName)
	{
		last_name = newLastName;
	}
	void	Contact::setNickName(std::string newNickname)
	{
		nickname = newNickname;
	}
	void	Contact::setPhoneNumber(std::string newPhone_number)
	{
		phone_number = newPhone_number;
	}
	void	Contact::setDaekestSecret(std::string newDarkestSecret)
	{
		darkest_secret = newDarkestSecret;
	}
	/********/

void	print_an_contact(Contact info)
{
    if (info.getFirstName().empty())
    {
        std::cout << "Ther is non-contact whit this ID!!\n";
        return ;
    }
    std::cout << "First Name : " << info.getFirstName() << std::endl;
    std::cout << "Last Name : " << info.getLastName() << std::endl;
    std::cout << "Nickname : " << info.getNickname() << std::endl;
    std::cout << "Phone Number : " << info.getPhoneNumber() << std::endl;
    std::cout << "Dark Secret : " << info.getDarkSecret() << std::endl;
}

void    print_table(PhoneBook book)
{
    int indx;

    indx = -1;
    while (indx < 8)
    {
        std::cout << "---------------------------------------------" << std::endl;
        if (indx == -1)
            std::cout << "|   indx   |First Name|Last Name | Nickname |" << std::endl;
        else
        {
            print_an_contact (book.get_my_phonebook(indx));
            // if (book.getFirstName().empty())
            //     return ;
            // std::cout << "|     " << indx + 1 << "    |";
            // if (book.getFirstName().length() > 10)
            //     std::cout << book.getFirstName().substr(0, 9) << ".|";
            // else
            //     std::cout << std::setw(10) << book.getFirstName();
            // if (book.getLastName().length() > 10)
            //     std::cout << book.getLastName().substr(0, 9) << ".|";
            // else
            //     std::cout << "|" << std::setw(10) << book.getLastName();
            // if (book.getNickname().length() > 10)
            //     std::cout << book.getNickname().substr(0, 9) << ".|" << std::endl;
            // else
            //     std::cout << "|" << std::setw(10) << book.getNickname() << "|" << std::endl;
        }
        indx++;
    }
    std::cout << "---------------------------------------------" << std::endl;
}

void	print_all_contact(Contact info[8])
{
    int indx;
    std::string test;
    indx = 0;
    while (indx < 8)
    {
        std::cout << "contact num " << indx + 1 << std::endl;
        std::cout << "First Name : " << info[indx].getFirstName() << std::endl;
        std::cout << "Last Name : " << info[indx].getLastName() << std::endl;
        std::cout << "Nickname : " << info[indx].getNickname() << std::endl;
        std::cout << "Phone Number : " << info[indx].getPhoneNumber() << std::endl;
        std::cout << "Dark Secret : " << info[indx].getDarkSecret() << std::endl;
        indx++;
    }
}

void	clear_an_accont(Contact *info)
{
	std::string empty_str;
	empty_str.clear();
    info->setFirstName(empty_str);
    info->setLastName(empty_str);
    info->setNickName(empty_str);
    info->setPhoneNumber(empty_str);
    info->setDaekestSecret(empty_str);
    std::cout << "Warning : this contact has an empty field, please enter all information to save a new contact." << std::endl;
}
