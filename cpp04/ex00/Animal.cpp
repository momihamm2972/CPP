/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:29:56 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 01:51:20 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Defalut";
    std::cout << "The Default constructor of Animal has been called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    *this = obj;
    std::cout << "The Copy constructor of Animal has been called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
    this->type = obj.type;
    std::cout << "The Copy assignment operator of Animal has been called" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "The Destructor of Animal has been called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "THIS IS ANIMAL!!" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}
