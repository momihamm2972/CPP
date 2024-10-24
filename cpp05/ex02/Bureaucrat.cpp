/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:38:03 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/24 17:16:55 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("")
{
    grade = 150;
}

Bureaucrat::Bureaucrat(std::string no_name, int no_grade) : name(no_name) ,  grade(no_grade)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    *this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    this->grade = obj.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{

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

void    Bureaucrat::signForm(AForm& form)
{
    form.beSigned(*this);
    std::cout << getName() << " signed " << form.getName() << std::endl;
}

void    Bureaucrat::executeForm(AForm const & form)
{
    form.execute(*this);
    std::cout << name << " executed " << form.getName() << std::endl;
}
