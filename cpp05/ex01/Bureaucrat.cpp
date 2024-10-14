/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:36:19 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/14 22:37:16 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("")
{
    grade = 150;
    std::cout << "The Default constructor of Bureaucrat has been called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string no_name, int no_grade) : name(no_name) ,  grade(no_grade)
{
    std::cout << "The parameterized constructor of Bureaucrat has been called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    *this = obj;
    std::cout << "The Copy constructor of Bureaucrat has been called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    this->grade = obj.grade;
    // this->name = obj.name;
    std::cout << "The Copy assignment operator of Bureaucrat has been called" << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "The Destructor of Bureaucrat has been called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void    Bureaucrat::incrementGrade()
{
    this->grade--;
    if (this->grade < 1)
        throw(Bureaucrat::GradeTooHighException());
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
    return out;
}

void    Bureaucrat::decrementGrade()
{
    this->grade++;
    if (this->grade > 150)
        throw (Bureaucrat::GradeTooLowException());
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too High!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too Low!");
}