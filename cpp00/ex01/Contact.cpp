/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:39:28 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/15 21:08:28 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

    Contact::Contact() : first_name ("kmi")
	{
        std::cout<< first_name;
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
                return ;
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

void	clear_an_accont(Contact info[8], int indx)
{
	std::string empty_str;
	empty_str.clear();
    info[indx].setFirstName(empty_str);
    info[indx].setLastName(empty_str);
    info[indx].setNickName(empty_str);
    info[indx].setPhoneNumber(empty_str);
    info[indx].setDaekestSecret(empty_str);
    std::cout << "Warning : this contact has an empty field, please enter all information to save a new contact." << std::endl;
}
