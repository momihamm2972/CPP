/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:57:41 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 05:26:24 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain ();
	std::cout << "The Default constructor of Cat has been called" << std::endl;
}


Cat::Cat(const Cat& obj)
{
	this->brain = new Brain(*obj.brain);
	*this = obj;
	std::cout << "The Copy constructor of Cat has been called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	if (this != &obj)
	{
		delete this->brain;
		this->brain = new Brain(*obj.brain);
		this->type = obj.type;
	}
	std::cout << "The Copy assignment operator of Cat has been called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "The Destructor of Cat has been called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MIYAWE,MIYAWE!!" << std::endl;
}
