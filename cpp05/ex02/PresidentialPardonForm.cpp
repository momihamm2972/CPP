/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:38:13 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/25 02:59:25 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm" , 25, 5) , soldier("soldier")
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &_soldier) : AForm("PresidentialPardonForm" , 25, 5) , soldier(_soldier)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj) : AForm(obj)
{
    *this = obj;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & obj)
{
    if (this != &obj)
        this->soldier = obj.soldier;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSing())
        throw AFormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecut())
        throw GradeTooHighException();
    std::cout << this->soldier << " has been pardoned by Zaphod Beeblebrox!!" << std::endl;
}