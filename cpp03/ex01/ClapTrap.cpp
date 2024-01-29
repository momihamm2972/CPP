/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:31:13 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/28 03:22:38 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "Default";
    hit = 10;
    energy = 10;
    damage = 0;
    std::cout << "Default constructor of ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& newName)
{
    name = newName;
    std::cout << "The Parm constructor of ClapTrap has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    *this = obj;
    std::cout << "Copy constructor of ClapTrap called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    this->name = obj.name;
    std::cout << "Copy assignment operator of ClapTrap called" << std::endl;
    return (*this);
}

ClapTrap ::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy > 0 && this->hit > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << this->damage << "  points of damage!" << std::endl;
        this->energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > (unsigned int)hit)
        this->hit = 0;
    else
        this->hit -= amount;
    std::cout << "ClapTrap took " << amount << " of damage" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy > 0 && this->hit > 0)
    {
        std::cout << "ClapTrap " << name << " repaired itself with " << amount << std::endl;
        this->energy--;
        this->hit += amount;
    }
}
