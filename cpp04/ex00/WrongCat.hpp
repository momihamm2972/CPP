/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:38:04 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 05:37:01 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        WrongCat(const WrongCat& obj);
        WrongCat& operator=(const WrongCat& obj);
        ~WrongCat();
        void makeSound() const;
};