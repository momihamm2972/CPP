/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:44:29 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/28 03:34:22 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default")
{
    // name = "Default";
    hit = 100;
    energy = 100;
    damage = 30;
    std::cout << "The Default constructor of FragTrap has been called" << std::endl;
}

FragTrap::FragTrap(const std::string& newName) : ClapTrap(newName)
{
    // name = newName;
    hit = 100;
    energy = 100;
    damage = 30;
    std::cout << "The Parm constructor of FragTrap has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
    std::cout << "The Copy constructor of FragTrap has been called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    this->name = obj.name;
    std::cout << "The Copy assignment operator of FragTrap has been called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "The Destructor of FragTrap has been called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->energy > 0 && this->hit > 0)
    {
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << this->damage << "  points of damage!" << std::endl;
        this->energy--;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high five, high five!!" << std::endl;
}
