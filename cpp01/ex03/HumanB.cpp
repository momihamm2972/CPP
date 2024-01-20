/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:00:58 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/19 22:13:14 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newname)
{
	this->name = newname;
	this->gun = NULL;
}

HumanB::~HumanB()
{
	
}

void    HumanB::setWeapon(Weapon& newGun)
{
	this->gun = &newGun;
}

void    HumanB::attack()
{
	if (this->gun)
		std::cout << this->name << " attacks with their " << this->gun->getType() << std::endl;
}