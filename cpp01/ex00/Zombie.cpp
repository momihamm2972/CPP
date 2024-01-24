/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:24:48 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/22 20:47:43 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "DEFAULT";
}
Zombie::~Zombie()
{
    std::cout << "The zombie " << this->name << " has been killed!!" << std::endl;
}

std::string	Zombie::get_name()
{
    return (this->name);
}
void    Zombie::set_name(std::string new_name)
{
    this->name = new_name;
}
void	Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}