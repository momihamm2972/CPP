/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:37:58 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/25 00:48:14 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default") , isSigned(false), gradeToExecut(1), gradeToSign(1)
{

}

AForm::AForm(const AForm& obj) : name(obj.name) , isSigned(obj.isSigned) , gradeToExecut(obj.gradeToExecut) , gradeToSign(obj.gradeToSign)
{
    
}

AForm::AForm(std::string _name, int gradeEx, int gradeSn) :  name(_name) , isSigned(false) , gradeToExecut(gradeEx) , gradeToSign(gradeSn)
{ 
    if (gradeToSign < 1 || gradeToExecut < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecut > 150)
		throw GradeTooLowException();
}

AForm& AForm::operator=(const AForm& obj)
{
    if (this != &obj)
        this->isSigned = obj.isSigned;
    return *this;
}

AForm::~AForm()
{

}

std::string AForm::getName() const
{
    return (name);
}

bool            AForm::getSing() const
{
    return (isSigned);
}

int             AForm::getGradeToExecut() const
{
    return (gradeToExecut);
}

int             AForm::getGradeToSign() const
{
    return (gradeToSign);
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too High!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too Low!");
}

const char* AForm::AFormNotSignedException::what() const throw()
{
    return ("Is not SIGNED /!\\");
}

std::ostream& operator<<(std::ostream& out, const AForm& form)
{
    out << form.getName() << ", Form grade to execut " << form.getGradeToExecut() << ", Form grade to sing " << form.getGradeToSign() << ", is sini " << form.getSing() <<"." << std::endl;
    return out;
}

void            AForm::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= gradeToSign)
        isSigned = true;
    else
        throw (AForm::GradeTooLowException());
}