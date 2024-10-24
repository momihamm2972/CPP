/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:25:46 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/24 20:30:35 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class   Intern
{
    public :
        Intern();
        Intern(const Intern & obj);
        Intern & operator=(const Intern & obj);
        ~Intern();
        AForm*  makeForm(std::string name, std::string target);
        class   InternDoesNotDoHisJob : public std::exception
        {
            public :
                virtual const char* what() const throw();
        };
};