/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:58:29 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 03:49:57 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain ();
    std::cout << "The Default constructor of Dog has been called" << std::endl;
}

Dog::Dog(const Dog& obj)
{
    this->brain = new Brain(*obj.brain);
    *this = obj;
    std::cout << "The Copy constructor of Dog has been called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
    {
        delete this->brain;
        this->brain = new Brain(*obj.brain);
        this->type = obj.type;
    }
    std::cout << "The Copy assignment operator of Dog has been called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "The Destructor of Dog has been called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "SLOKYA HAW, SLOKYA HAW!!" << std::endl;
}
