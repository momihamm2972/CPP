/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:19:55 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 04:08:18 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

# define CHAR 0
# define INT 1
# define FLOAT 2
# define DOUBLE 3

class ScalarConverter
{
    private :
        std::string input;
        ScalarConverter();
        ScalarConverter(std::string __input);
        ScalarConverter(const ScalarConverter & obj);
        ScalarConverter & operator=(const ScalarConverter & obj);
        ~ScalarConverter();
        void    intCovert();
        void    charCovert();
        void    floatCovert();
        void    doubleCovert();
    public :
        static void convert(const std::string& str);
};