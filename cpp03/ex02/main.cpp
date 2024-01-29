/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:44:34 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/28 03:39:21 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("morpho");
    FragTrap b;
    a.attack("bo9al");
    b = a;
    b.attack("MOROCCO");
    a.highFivesGuys();
    b.highFivesGuys();
}