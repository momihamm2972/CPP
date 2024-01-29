/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:43:03 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 02:50:34 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "The Default constructor of WrongAnimal has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    *this = obj;
    std::cout << "The Copy constructor of WrongAnimal has been called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    this->type = obj.type;
    std::cout << "The Copy assignment operator of WrongAnimal has been called" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "The Destructor of WrongAnimal has been called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal,WrongAnimal!!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}
