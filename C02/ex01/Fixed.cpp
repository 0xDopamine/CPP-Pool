/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 00:29:59 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/21 20:43:22 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixedPointValue(0) { std::cout << "Default constructor called" << std::endl; };

Fixed::Fixed(const Fixed& f1): fixedPointValue(f1.fixedPointValue)
{
	std::cout << "Copy constructor called" << std::endl;
};

Fixed::Fixed(const int value): fixedPointValue(value << fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed(const float value): fixedPointValue(roundf(value * (1 << fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
};

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; };

Fixed&	Fixed::operator=(const Fixed& f1)
{
	if (this != &f1)
		fixedPointValue = f1.fixedPointValue;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
};

std::ostream& operator<<(std::ostream& output, const Fixed& f1)
{
	return output << (f1.toFloat());
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPointValue;
};

void    Fixed::setRawBits( int const raw ) { fixedPointValue = raw; };

int		Fixed::toInt( void ) const
{
	return ((fixedPointValue) >> fractionalBits);
}

float	Fixed::toFloat( void ) const
{
	return ((float)fixedPointValue / (1 << fractionalBits));	
}