/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:38:21 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/24 03:12:14 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    private :
        std::string     soldier;
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &_soldier);
        RobotomyRequestForm(const RobotomyRequestForm & obj);
        RobotomyRequestForm & operator=(const RobotomyRequestForm & obj);
        ~RobotomyRequestForm();
        void    execute(const Bureaucrat & executor) const;
};