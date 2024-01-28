/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:44:32 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/28 01:18:48 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(const std::string& newName);
        FragTrap(const FragTrap& obj);
        FragTrap& operator=(const FragTrap& obj);
        ~FragTrap();
        void highFivesGuys(void);
        void attack(const std::string& target);
};
