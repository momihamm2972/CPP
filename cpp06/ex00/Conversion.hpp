/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:19:55 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/24 22:42:41 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostrem>

enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

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
    puclic :
        static void convert(const std::string& str);
};