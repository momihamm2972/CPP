/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:38:16 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/24 02:53:03 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
        std::string     soldier;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string &_soldier);
        PresidentialPardonForm(const PresidentialPardonForm & obj);
        PresidentialPardonForm & operator=(const PresidentialPardonForm & obj);
        ~PresidentialPardonForm();
        void    execute(Bureaucrat const & executor) const;
};