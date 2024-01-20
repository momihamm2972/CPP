/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:00:52 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/19 21:30:24 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newname, Weapon& new_weapon) : gun( new_weapon )
{
    this->name = newname;
}

HumanA::~HumanA()
{
    
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->gun.getType() << std::endl;
}
