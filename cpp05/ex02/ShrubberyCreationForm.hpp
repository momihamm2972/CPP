/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:38:26 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/24 03:12:05 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private :
        std::string     soldier;
        void            artTrees(std::string soldier) const;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &_soldier);
        ShrubberyCreationForm(const ShrubberyCreationForm & obj);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & obj);
        ~ShrubberyCreationForm();
        void    execute(Bureaucrat const & executor) const;
};
