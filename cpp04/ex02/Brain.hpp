/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:02:29 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/29 03:14:52 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain
{
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(const Brain& obj);
        Brain& operator=(const Brain& obj);
        ~Brain();

};
