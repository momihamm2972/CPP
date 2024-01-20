/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:57:03 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/19 17:20:28 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *list;
    int     indx;

    list = new Zombie[N];
    indx = 0;
    while (indx < N)
    {
        list[indx].set_name(name);
        list[indx].announce();
        indx++;
    }
    return (list);
}