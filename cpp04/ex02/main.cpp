/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:05:55 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 05:27:13 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal* animaux[8];
    for (int i = 0; i < 4 ; i++)
        animaux[i] = new Dog ();
    for (int i = 4; i < 8 ; i++)
        animaux[i] = new Cat ();
    for (int i = 0;i < 8;i++)
        animaux[i]->makeSound();
    for (int i = 0; i < 8 ; i++)
        delete animaux [i];
}