/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:24:35 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/22 20:48:39 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *newZombie;

	newZombie = new Zombie(); // malloc (sizeof (Zombie));
	newZombie->set_name(name);
	return (newZombie);
}