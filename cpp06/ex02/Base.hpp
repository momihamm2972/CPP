/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:41:05 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 00:57:52 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>

class Base
{
    public :
        virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);