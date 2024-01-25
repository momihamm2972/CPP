/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 03:04:39 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/25 05:27:04 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractional = 8;

Fixed::Fixed()
{
    fixedPoint = 0;
}

Fixed::Fixed(const Fixed& obj)
{
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	this->fixedPoint = obj.fixedPoint;
	return (*this);
}

Fixed::Fixed(const int  num)
{
	fixedPoint = num * (1 << fractional);
}

Fixed::Fixed(const float var)
{
	fixedPoint = std::roundf(var * (1 << fractional));
}

Fixed::~Fixed()
{
	
}

int	Fixed::getRawBits( void ) const
{
	return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedPoint = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)fixedPoint / (1 << fractional));
}

int	Fixed::toInt( void ) const
{
	return (fixedPoint >> fractional);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

bool Fixed::operator<(const Fixed& obj) const
{
	return (this->fixedPoint < obj.fixedPoint);
}

bool Fixed::operator>(const Fixed& obj) const
{
	return (this->fixedPoint > obj.fixedPoint);
}

bool Fixed::operator>=(const Fixed& obj) const
{
	return (this->fixedPoint >= obj.fixedPoint);
}

bool Fixed::operator<=(const Fixed& obj) const
{
	return (this->fixedPoint <= obj.fixedPoint);
}

bool Fixed::operator==(const Fixed& obj) const
{
	return (this->fixedPoint == obj.fixedPoint);
}

bool Fixed::operator!=(const Fixed& obj) const
{
	return (this->fixedPoint != obj.fixedPoint);
}

Fixed	Fixed::operator+(const Fixed& obj) const
{
	return (this->toFloat() + obj.toFloat() );
}

Fixed	Fixed::operator-(const Fixed& obj) const
{
	return (this->toFloat() - obj.toFloat() );
}

Fixed	Fixed::operator*(const Fixed& obj) const
{
	return (this->toFloat() * obj.toFloat() );
}

Fixed	Fixed::operator/(const Fixed& obj) const
{
	return (this->toFloat() / obj.toFloat());
}

Fixed	Fixed::operator++(int)
{
	Fixed no(*this);

	fixedPoint++;
	return (no);
}

Fixed	Fixed::operator--(int)
{
	Fixed no(*this);

	fixedPoint--;
	return (no);
}

Fixed	Fixed::operator++()
{
	fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	fixedPoint--;
	return (*this);
}

Fixed&	 Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed&	 Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return ((Fixed&)b);
	return ((Fixed&)a);
}

Fixed&	 Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed&	 Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return ((Fixed&)a);
	return ((Fixed&)b);
}
