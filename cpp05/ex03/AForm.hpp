/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:25:35 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/24 17:27:51 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private :
        const std::string   name;
        bool                isSigned;
        int                 gradeToExecut;
        int                 gradeToSign;
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
            virtual const char* what() const throw();
    };
    class           GradeTooLowException : public std::exception
    {
        public :
            virtual const char* what() const throw();
    };
    class           AFormNotSignedException : public std::exception
    {
        public :
            virtual const char* what() const throw();
    };
    void            beSigned(Bureaucrat& bureaucrat);
    virtual void    
    execute(Bureaucrat const & exiter) const = 0;
};

    std::ostream& operator<<(std::ostream& out, const AForm& AForm);