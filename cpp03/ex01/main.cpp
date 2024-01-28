/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:31:18 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/28 01:09:04 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap b;
    ScavTrap a("no_name");
    a.attack("russia");
    b = a;
    b.attack("Egypt");
    a.guardGate();
    b.guardGate();
}