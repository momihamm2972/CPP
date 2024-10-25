/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:10:29 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/25 21:49:12 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

struct Data
{
    std::string lkmaya;
    int         num;
};

class Serializer
{
    private :
        Serializer();
        Serializer(const Serializer & obj);
        Serializer & operator=(const Serializer & obj);
        ~Serializer();
    public :
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};