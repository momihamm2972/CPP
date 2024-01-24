/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 03:04:45 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/24 06:30:37 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>
// #include <bool>

class Fixed
{
    private :
		int					fixedPoint;
		static const int	fractional;
	public :
		Fixed();
		Fixed(const Fixed& obj);
		Fixed& operator=(const Fixed& obj);
		Fixed(const int num);
		Fixed(const float var);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		bool operator<(const Fixed& obj) const;
		bool operator>(const Fixed& obj) const;
		bool operator>=(const Fixed& obj) const;
		bool operator<=(const Fixed& obj) const;
		bool operator==(const Fixed& obj) const;
		bool operator!=(const Fixed& obj) const;
		Fixed	operator+(const Fixed& obj) const;
		Fixed	operator-(const Fixed& obj) const;
		Fixed	operator*(const Fixed& obj) const;
		Fixed	operator/(const Fixed& obj) const;
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	operator++();
		Fixed	operator--();
		static Fixed&	 min(const Fixed& obj);
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);
/*
while (a > b)
*/