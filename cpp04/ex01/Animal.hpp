/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:57:19 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 02:57:30 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
    protected :
		std::string type;
    public :
        Animal();
        Animal(const Animal& obj);
        Animal& operator=(const Animal& obj);
        virtual ~Animal();
        virtual void makeSound() const;
		std::string getType() const;
};
