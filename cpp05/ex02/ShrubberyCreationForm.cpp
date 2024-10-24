/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:38:24 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/24 03:07:35 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm" , 137, 145) , soldier("soldier")
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_soldier) : AForm("ShrubberyCreationForm" , 137, 145) , soldier(_soldier)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & obj) : AForm(obj)
{
    *this = obj;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & obj)
{
    this->soldier = obj.soldier;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void    ShrubberyCreationForm::artTrees(std::string soldier) const
{
    std::ofstream file;
    file.open(soldier + "_shrubbery");
    if (!file.is_open())
        std::exit(1);
    file << "                ccee88oo         " << std::endl;
    file << "        C8O8O8Q8PoOb o8oo         " << std::endl;
    file << "     dOB69QO8PdUOpugoO9bD         " << std::endl;
    file << "   CgggbU8OU qOp qOdoUOdcb         " << std::endl;
    file << "       6OuU  /p u gcoUodpP         " << std::endl;
    file << "          \\\\//  /douUP         " << std::endl;
    file << "            \\\\////         " << std::endl;
    file << "             ||/\\         " << std::endl;
    file << "             |\\//         " << std::endl;
    file << "             |||||         " << std::endl;
    file << "       .....//||||\\....         " << std::endl;
    file << std::endl;
    file.close();
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(!this->getSing())
        throw AFormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecut())
        throw GradeTooHighException();
    this->artTrees(this->getName());
}
