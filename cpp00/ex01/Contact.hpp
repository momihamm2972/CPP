/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:39:31 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/03 14:43:34 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	public:
	/*geters*/
	std::string	getFirstName()
	{
		// std::cout << "@#_>" << first_name << std::endl;
		return (first_name);
	}
	std::string	getLastName()
	{
		return (last_name);
	}
	std::string	getNickname()
	{
		return (nickname);
	}
	std::string	getPhoneNumber()
	{
		return (phone_number);
	}
	std::string	getDarkSecret()
	{
		return (darkest_secret);
	}
	/********/
	/*seters*/
	void	setFirstName(std::string newFirstName)
	{
		first_name = newFirstName;
	}
	void	setLastName(std::string newLastName)
	{
		last_name = newLastName;
	}
	void	setNickName(std::string newNickname)
	{
		nickname = newNickname;
	}
	void	setPhoneNumber(std::string newPhone_number)
	{
		phone_number = newPhone_number;
	}
	void	setDaekestSecret(std::string newDarkestSecret)
	{
		darkest_secret = newDarkestSecret;
	}
	/********/
		// std::string	getFirstName() const
		// {
		// 	return first_name;
		// }
		// std::string	getLastName() const;
		// std::string	getFirstName() const;
		// std::string	getFirstName() const;
		// std::string	getFirstName() const;

		// void	f( std::string name)
		// {
		// 	first_name = name;
		// }
};

#endif