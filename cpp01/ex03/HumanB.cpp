/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:00:58 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/23 01:38:33 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newname) : name(newname), gun(NULL)
{
	std::cout << "Parameter constructor HumanB called"<<std::endl;
}

HumanB::HumanB() : name("default"), gun(NULL)
{
	std::cout << "constructor HumanB called"<<std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor HumanB called"<<std::endl;
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