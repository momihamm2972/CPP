/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:38:19 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/25 00:29:19 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm" , 72, 45) , soldier("soldier")
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &_soldier) : AForm("RobotomyRequestForm" , 72, 45) , soldier(_soldier)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & obj) : AForm(obj)
{
    *this = obj;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & obj)
{
    if (this != &obj)
        this->soldier = obj.soldier;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void    RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
    time_t intTime = time(0);
    if (!this->getSing())
        throw AFormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecut())
        throw GradeTooHighException();
    std::cout << "Nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnoises" << std::endl;
    if (intTime % 2 == 0)
        std::cout << this->soldier << "has been robotomized successfull!!" << std::endl;
    else
        std::cout << this->soldier << "has not been robotomized successfull!!" << std::endl;
}