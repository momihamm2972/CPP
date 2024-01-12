/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:16:37 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/12 15:18:05 by momihamm         ###   ########.fr       */
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
    Contact my_phonebook[8];
	public :
	Contact	*retu_cont()
	{
		return (my_phonebook[8]);
	}
	// void	set_cont(Contact my_phonebook[8], int indx)
	// {
	// 	// 
	// }
	int	add_new_cont(Contact user[8], int indx);
};

void	print_all_contact(Contact info[8]);
void	clear_an_accont(Contact info[8],int indx);
void    print_table(Contact info[8]);
void	print_an_contact(Contact info[8], int indx);
int		ft_atoi_pp(std::string str);

#endif