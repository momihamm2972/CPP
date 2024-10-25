/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:38:01 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/25 00:25:49 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private :
        const std::string           name;
        bool                        isSigned;
        const int                   gradeToExecut;
        const int                   gradeToSign;
    public :
        AForm();
        AForm(std::string _name, int gradeEx, int gradeSn);
        AForm(const AForm& obj);
    AForm& operator=(const AForm& obj);
    virtual ~AForm();
    std::string     getName() const;
    bool            getSing() const;
    int             getGradeToExecut() const;
    int             getGradeToSign() const;
    class           GradeTooHighException : public std::exception
    {
        public :
             const char* what() const throw();
    };
    class           GradeTooLowException : public std::exception
    {
        public :
            const char* what() const throw();
    };
    class           AFormNotSignedException : public std::exception
    {
        public :
            const char* what() const throw();
    };
    void            beSigned(Bureaucrat& bureaucrat);
    virtual void    execute(Bureaucrat const & exiter) const = 0;
};

    std::ostream& operator<<(std::ostream& out, const AForm& AForm);
