/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 03:04:39 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/24 06:31:00 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractional = 8;

Fixed::Fixed()
{
    fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	*this = obj;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	this->fixedPoint = obj.fixedPoint;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::Fixed(const int  num)
{
	fixedPoint = num * (1 << fractional);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float var)
{
	fixedPoint = std::roundf(var * (1 << fractional));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
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
	return (this->toFloat() / obj.toFloat() );
}

Fixed	Fixed::operator++(int)
{
	Fixed no;

	no = *this;
	fixedPoint++;
	return (no);
}

Fixed	Fixed::operator--(int)
{
	Fixed no;

	no = *this;
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

Fixed&	 Fixed::min(const Fixed& obj)
{
	return ()
}
