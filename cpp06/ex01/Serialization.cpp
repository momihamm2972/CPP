/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:10:27 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/25 22:20:21 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serializer::Serializer()
{
    
}

Serializer::Serializer(const Serializer & obj)
{
    *this = obj;
}

Serializer & Serializer::operator=(const Serializer & obj)
{
    (void) obj;
    return (*this);
}

Serializer::~Serializer()
{
    
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}