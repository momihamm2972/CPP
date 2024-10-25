/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:36:31 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/24 23:44:58 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private :
        const std::string           name;
        bool                        isSigned;
        const int                   gradeToExecut;
        const int                   gradeToSign;
    public :
        Form();
        Form(std::string _name, int gradeEx, int gradeSn);
        Form(const Form& obj);
        Form& operator=(const Form& obj);
        ~Form();
        std::string     getName() const;
        bool            getSing() const;
        int             getGradeToExecut() const;
        int             getGradeToSign() const;
        class           GradeTooHighException : public std::exception
        {
            public :
                virtual const char* what() const throw();
        };
        class           GradeTooLowException : public std::exception
        {
            public :
                virtual const char* what() const throw();
        };
        void            beSigned(Bureaucrat& bureaucrat);
};

    std::ostream& operator<<(std::ostream& out, const Form& Form);