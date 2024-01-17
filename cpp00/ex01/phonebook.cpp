/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:16:25 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/17 09:52:38 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

    PhoneBook::PhoneBook()
    {
        
    }
    PhoneBook::~PhoneBook()
    {
        
    }
    /*geter*/
    Contact PhoneBook::get_my_phonebook(int indx)
    {
        return (my_phonebook[indx]);
    }
    /*******/
    /*seters*/
    void PhoneBook::set_obj(Contact peer, int indx)
    {
           my_phonebook[indx] = peer;
    }
    /********/

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

int PhoneBook::add_new_cont(Contact *user, int indx)
{
    std::string input;
    int         add;
    
    add = 0;
    std::cout << "To add a new contact please enter the follwing information :"<< std::endl;
    std::cout << "First name :";
    if (std::getline(std::cin, input).eof())
        exit(1);
    if (input.empty())
		add++;
    user->setFirstName(input);
	user->getFirstName();
    std::cout << "Last name :";
    if (std::getline(std::cin, input).eof())
        exit(1);
	if (input.empty())
		add++;
    user->setLastName(input);
    std::cout << "Nickname :";
    if (std::getline(std::cin, input).eof())
        exit(1);
	if (input.empty())
		add++;
    user->setNickName(input);
    std::cout << "Phone number :";
    if (std::getline(std::cin, input).eof())
        exit(1);
	if (input.empty())
		add++;
    user->setPhoneNumber(input);
    std::cout << "Darkest secret :";
    if (std::getline(std::cin, input).eof())
        exit(1);
	if (input.empty())
		add++;
    user->setDaekestSecret(input);
    std::cout << "Thanks for your time!!" << std::endl;
	if (add > 0)
	{
		clear_an_accont (user);
		return (-1);
	}
    set_obj(*user, indx);
    return (0);
}


void	PhoneBook::print_an_contact(Contact info)
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

void    PhoneBook::printPhonebook()
{
    PhoneBook b;
    b = *this;
    int i =0;
    while (i < 8)
    {
        this->print_an_contact(b.get_my_phonebook(i));
        i++;
    }
}

void    print_contact_in_table(Contact peer)
{
	if (peer.getFirstName().length() <= 10)
		std::cout << std::setw(10) << peer.getFirstName() << "|";
	else
		std::cout << peer.getFirstName().substr(0, 9) << ".|";
	if (peer.getLastName().length() <= 10)
		std::cout << std::setw(10) << peer.getLastName() << "|";
	else
		std::cout << peer.getLastName().substr(0, 9) << ".|";
	if (peer.getNickname().length() <= 10)
		std::cout << std::setw(10) << peer.getNickname() << "|" << std::endl;
	else
		std::cout << peer.getNickname().substr(0, 9) << ".|" << std::endl;
}

void    PhoneBook::search(PhoneBook bookphone)
{
    int         indx;
    std::string in_put;
    
    indx = 0;
    if (print_table (bookphone) == -1)
		return ;
	std::cout << "searching$>";
    if (std::getline (std::cin, in_put).eof())
        return ;
    while (in_put[indx])
    {
        if (!isdigit(in_put[indx]))
        {
            std::cout << "ID NOT VALID!"<< std::endl;
            return ;
        }
        indx++;
    }
    indx = std::atoi(in_put.c_str());
	if (indx <= 9)
    	print_an_contact(bookphone.get_my_phonebook(indx-1));
	else
		std::cout << "NON-CONTACT ID!"<< std::endl;
    
}

int main(void)
{
    PhoneBook	emty;
    Contact     peer;
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
            status = emty.add_new_cont(&peer, indx % 8);
			if (status == -1)
				indx--;
			indx++;
            in_put.clear();
        }
        else if (in_put == "SEARCH")
        {
            emty.search(emty);
        }
        else
            std::cout << "awesomephonebook: command not found!!\n";
        std::cout<< "awesomephonebook$>";
    }
}
