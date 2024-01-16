/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:16:37 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/16 19:35:05 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private :
    	Contact	my_phonebook[8];
	public :
	/*Constructor*/
	PhoneBook();
	~PhoneBook(){};
	/*************/
	/*geters*/
	Contact	get_my_phonebook(int indx);
	/********/
	/*seters*/
	void	set_obj(Contact peer, int indx);
	/********/
	int	add_new_cont(Contact *user, int indx);
	void	printPhonebook();
void	print_an_contact(Contact info);
void    search(PhoneBook bookphone);
};

// void	print_all_contact(Contact *info);
void	clear_an_accont(Contact *info);
void    print_table(PhoneBook book);
void	print_an_contact(Contact info);
// int		ft_atoi_pp(std::string str);

#endif