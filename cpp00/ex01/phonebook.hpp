/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:16:37 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/17 12:09:57 by momihamm         ###   ########.fr       */
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
	/*geters*/
	Contact	get_my_phonebook(int indx);
	/********/
	/*seters*/
	void	set_obj(Contact peer, int indx);
	/********/
	void	printPhonebook();
	void	print_an_contact(Contact info);
	void    search(PhoneBook bookphone);
	int		add_new_cont(Contact *user, int indx);
};

void	clear_an_accont(Contact *info);
void	print_an_contact(Contact info);
void    print_contact_in_table(Contact peer);
int		print_table(PhoneBook book);

#endif