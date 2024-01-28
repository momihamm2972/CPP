/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:44:27 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/28 00:02:40 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
    protected :
		std::string	name;
		int			hit;
		int			energy;
		int			damage;
	public :
		ClapTrap();
		ClapTrap(const std::string& newName);
		ClapTrap(const ClapTrap& obj);
		ClapTrap& operator=(const ClapTrap& obj);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
