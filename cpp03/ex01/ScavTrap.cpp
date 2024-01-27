/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:31:24 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/27 08:22:09 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    name = "Default";
    hit = 100;
    energy = 50;
    damage = 20;
    std::cout << "The Default constructor of ScavTrap has been called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& newName) : ClapTrap(newName)
{
    name = newName;
    hit = 100;
    energy = 50;
    damage = 20;
	std::cout << "The Parm constructor of ScavTrap has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
    this->name = obj.name;
    std::cout << "The Copy constructor of ScavTrap has been called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    this->name = obj.name;
    std::cout << "The Copy assignment opewator has been called" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "The Destructor of ScavTrap has been called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    // std::cout << "in" << hit << "-" << energy <<  std::endl;
	 if (this->energy > 0 && this->hit > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << this->damage << "  points of damage!" << std::endl;
        this->energy--;
    }
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode, be careful!!" << std::endl;
}
