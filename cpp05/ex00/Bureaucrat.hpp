/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:40:47 by momihamm          #+#    #+#             */
/*   Updated: 2024/03/31 16:46:29 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat
{
    private :
        const std::string name;
        int               grade;
    public :
        Bureaucrat();
        std::string getName();
        int         getGrade();
        void    incrementBureaucrat(int &grade);
        void    decrementBureaucrat(int &grade);
};

