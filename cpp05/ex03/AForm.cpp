/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:25:32 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/25 03:17:50 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("")
{
    isSigned = false;
    gradeToExecut = 150;
    gradeToSign = 150;
}

AForm::AForm(const AForm& obj)
{
    *this = obj;
}

AForm::AForm(std::string _name, int gradeEx, int gradeSn) : name(_name) , gradeToExecut(gradeEx) , gradeToSign(gradeSn)
{

}

AForm& AForm::operator=(const AForm& obj)
{
    this->isSigned = obj.isSigned;
    this->gradeToExecut = obj.gradeToExecut;
    this->gradeToSign = obj.gradeToSign;
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
    out << form.getName() << ", Form grade to execut " << form.getGradeToExecut() << ", Form grade to sing " << form.getGradeToSign() << ", is sing " << (form.getSing() ? "is singed" : "is not singed") <<"." << std::endl;
    return out;
}

void            AForm::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= gradeToSign)
        isSigned = true;
    else
        throw (AForm::GradeTooLowException());
}