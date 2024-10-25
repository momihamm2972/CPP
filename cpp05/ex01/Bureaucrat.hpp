/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:36:25 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/24 23:42:41 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private :
        const std::string   name;
        int                 grade;
    public :
        Bureaucrat();
        Bureaucrat(std::string no_name, int no_grade);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& obj);
        ~Bureaucrat();
        std::string getName() const;
        int         getGrade() const;
        void    incrementGrade();
        void    decrementGrade();
        class   GradeTooHighException : public std::exception
        {
            public :
                const char* what() const throw();
        };
        class   GradeTooLowException : public std::exception
        {
            public :
                const char* what() const throw();
        };
        void    signForm(Form& form);
};

    std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);