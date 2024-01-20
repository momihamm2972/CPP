/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:01:05 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/19 20:58:22 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newtype)
{
    this->type = newtype;
}
Weapon::~Weapon()
{
    
}

std::string Weapon::getType()
{
    return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}
