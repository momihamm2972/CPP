/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:40:42 by momihamm          #+#    #+#             */
/*   Updated: 2024/07/04 16:12:43 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("")
{
    grade = 150;
    std::cout << "The Default constructor of Bureaucrat has been called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    *this = obj;
    std::cout << "The Copy constructor of Bureaucrat has been called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    this->grade = obj.grade;
    std::cout << "The Copy assignment operator of Bureaucrat has been called" << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "The Destructor of Bureaucrat has been called" << std::endl;
}

std::string Bureaucrat::getName()
{
    return this->name;
}

int Bureaucrat::getGrade()
{
    return this->grade;
}

void    Bureaucrat::incrementGrade()
{
    this->grade--;
}

void    Bureaucrat::decrementGrade()
{
    this->grade++;
}