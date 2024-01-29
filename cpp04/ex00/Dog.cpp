/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:13:13 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 01:50:37 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "The Default constructor of Dog has been called" << std::endl;
}

Dog::Dog(const Dog& obj)
{
    *this = obj;
    std::cout << "The Copy constructor of Dog has been called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
    this->type = obj.type;
    std::cout << "The Copy assignment operator of Dog has been called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "The Destructor of Dog has been called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "SLOKYA HAW, SLOKYA HAW!!" << std::endl;
}
