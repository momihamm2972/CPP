/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:24:37 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/22 21:02:28 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  ThePatientZero;
    Zombie  *ThePatientOne;

    ThePatientZero.set_name("ThePatientZero");
    ThePatientZero.announce();
    ThePatientOne = newZombie ("ThePatientOne");
    ThePatientOne->announce();
    delete ThePatientOne;
    randomChump("ThePatientTwo");
}