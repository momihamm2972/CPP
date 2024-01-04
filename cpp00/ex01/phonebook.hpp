/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:50:32 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/04 21:32:00 by momihamm         ###   ########.fr       */
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
	public :
    Contact my_phonebook[8];
	int	add_new_cont(Contact user[8], int indx);
};

void	print_all_contact(Contact info[8]);
void	clear_an_accont(Contact info[8],int indx);
void    print_table(Contact info[8]);
void	print_an_contact(Contact info[8], int indx);

#endif