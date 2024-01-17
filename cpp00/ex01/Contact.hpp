/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:39:31 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/17 12:28:47 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
	/*Constructor*/
	Contact();
	~Contact();
	/*************/
	/*geters*/
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNumber();
	std::string	getDarkSecret();
	/********/
	/*seters*/
	void	setFirstName(std::string newFirstName);
	void	setLastName(std::string newLastName);
	void	setNickName(std::string newNickname);
	void	setPhoneNumber(std::string newPhone_number);
	void	setDaekestSecret(std::string newDarkestSecret);
	/********/
};

#endif