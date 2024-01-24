/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:24:51 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/22 20:45:46 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
	private :
		std::string name;
	public :
		Zombie();
		~Zombie();
		std::string	get_name();
		void	set_name(std::string new_name);
		void	announce(void);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif