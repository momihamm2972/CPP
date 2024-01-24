/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:01:05 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/23 01:33:14 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newtype)
{
    std::cout << "constructor Weapon called"<<std::endl;
    this->type = newtype;
}
Weapon::~Weapon()
{
    std::cout << "Destructor Weapon called"<<std::endl;
}

const std::string&	Weapon::getType()
{
    return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}
