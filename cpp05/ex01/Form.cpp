/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:36:28 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/21 21:05:53 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("")
{
    isSigned = false;
    gradeToExecut = 150;
    gradeToSign = 150;
}

Form::Form(const Form& obj)
{
    *this = obj;
}

Form::Form(std::string _name, int gradeEx, int gradeSn) : name(_name) , gradeToExecut(gradeEx) , gradeToSign(gradeSn)
{

}

Form& Form::operator=(const Form& obj)
{
    this->isSigned = obj.isSigned;
    this->gradeToExecut = obj.gradeToExecut;
    this->gradeToSign = obj.gradeToSign;
    return *this;
}

Form::~Form()
{

}

std::string Form::getName() const
{
    return (name);
}

bool            Form::getSing() const
{
    return (isSigned);
}

int             Form::getGradeToExecut() const
{
    return (gradeToExecut);
}

int             Form::getGradeToSign() const
{
    return (gradeToSign);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too High!");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too Low!");
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
    out << form.getName() << ", Form grade to execut " << form.getGradeToExecut() << ", Form grade to sing " << form.getGradeToSign() << ", is sini " << form.getSing() <<"." << std::endl;
    return out;
}

void            Form::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= gradeToSign)
        isSigned = true;
    else
        throw (Form::GradeTooLowException());
}