/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:59:11 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 06:02:52 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "The Default constructor of WrongAnimal has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    (void) obj;
    std::cout << "The Copy constructor of WrongAnimal has been called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    (void) obj;
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

