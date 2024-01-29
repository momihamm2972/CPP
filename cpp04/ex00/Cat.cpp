/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:13:05 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 01:51:09 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "The Default constructor of Cat has been called" << std::endl;
}


Cat::Cat(const Cat& obj)
{
    *this = obj;
    std::cout << "The Copy constructor of Cat has been called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
    this->type = obj.type;
    std::cout << "The Copy assignment operator of Cat has been called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "The Destructor of Cat has been called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MIYAWE,MIYAWE!!" << std::endl;
}

