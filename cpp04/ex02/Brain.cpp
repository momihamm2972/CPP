/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:02:25 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 03:19:55 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100 ; i++)
        ideas[i].clear();
    std::cout << "The Default constructor of Brain has been called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
    *this = obj;
    std::cout << "The Copy constructor of Brain has been called" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
    for (int i = 0; i < 100 ; i++)
        this->ideas[i] = obj.ideas[i];
    std::cout << "The Copy assignment operator of Brain has been called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "The Destructor of Brain has been called" << std::endl;
}