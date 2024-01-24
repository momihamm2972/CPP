/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 02:03:56 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/23 01:40:17 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

class Harl
{
	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		void	(Harl::*ptr[4])();
	public :
		Harl();
		void	complain( std::string level );
};

#endif