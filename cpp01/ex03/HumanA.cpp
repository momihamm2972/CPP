/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:00:52 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/23 04:00:05 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newname, Weapon& new_weapon) : name (newname), gun( new_weapon )
{
    std::cout << "Parameter constructor HumanA called"<<std::endl;
}

HumanA::~HumanA()
{
    std::cout << "Destructor HumanA called"<<std::endl;
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->gun.getType() << std::endl;
}
