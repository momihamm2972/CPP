/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:38:00 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 02:52:02 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "The Default constructor of WrongCat has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
    *this = obj;
    std::cout << "The Copy constructor of WrongCat has been called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    this->type = obj.type;
    std::cout << "The Copy assignment operator of WrongCat has been called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "The Destructor of WrongCat has been called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat,WrongCat!!" << std::endl;
}
