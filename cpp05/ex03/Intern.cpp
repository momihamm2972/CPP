/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:25:44 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/24 20:30:58 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    
}

Intern::Intern(const Intern & obj)
{
    *this = obj;
}

Intern & Intern::operator=(const Intern & obj)
{
    (void)obj;
    return *this;
}

Intern::~Intern()
{
    
}

const char* Intern::InternDoesNotDoHisJob::what() const throw()
{
    return ("The Intern does not his Work!!");
}

int     getBureaName(const std::string& name)
{
    std::string bureaName[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    int         index = 0;

    while (index < 3 && bureaName[index] != name)
        index++;
    return index;
}

AForm*  Intern::makeForm(std::string name, std::string target)
{
    int     index;
    AForm*  form;

    index = getBureaName(name);
    switch (index)
    {
        case(0) :
            form = new RobotomyRequestForm(target);
            break;
        case(1) :
            form = new PresidentialPardonForm(target);
            break;
        case(2) :
            form = new ShrubberyCreationForm(target);
            break;
        default:
            throw InternDoesNotDoHisJob();
    }
    std::cout << "Intern creates " << form->getName() << std::endl;
    return form;
}
