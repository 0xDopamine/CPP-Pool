/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 00:29:59 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/21 22:10:41 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixedPointValue(0) { };

Fixed::Fixed(const Fixed& f1)
{
	*this = f1;
};

Fixed::Fixed(const int value): fixedPointValue(value << fractionalBits) { };

Fixed::Fixed(const float value): fixedPointValue(roundf(value * (1 << fractionalBits))) { };

Fixed::~Fixed() { };

Fixed&	Fixed::operator=(const Fixed& f1)
{
	if (this != &f1)
		fixedPointValue = f1.fixedPointValue;
	return *this;
};

Fixed	Fixed::operator+(const Fixed& f1)
{
	Fixed	other;
	
	other = this->toFloat() + f1.toFloat();
	return (other);
};

Fixed	Fixed::operator-(const Fixed& f1)
{
	Fixed	other;

	other = this->toFloat() - f1.toFloat();
	return (other);
};

Fixed	Fixed::operator*(const Fixed& f1)
{
	Fixed	other;

	other = this->toFloat() * f1.toFloat();
	return (other);
};

Fixed	Fixed::operator/(const Fixed& f1)
{
	Fixed	other;

	other = this->toFloat() / f1.toFloat();
	return (other);
};

Fixed&	Fixed::operator++( void )
{
	this->fixedPointValue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed other;
	this->fixedPointValue++;
	return (other);
}

Fixed&	Fixed::operator--( void )
{
	this->fixedPointValue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed other;
	this->fixedPointValue--;
	return (other);
}

Fixed	Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1.fixedPointValue > f2.fixedPointValue)
		return (f1);
	else
		return (f2);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1.fixedPointValue > f2.fixedPointValue)
		return (f1);
	else
		return (f2);
}

bool	Fixed::operator==(const Fixed& f1)
{
	if (this == &f1)
		return (true);
	return (false);
};

bool	Fixed::operator!=(const Fixed& f1)
{
	if (this == &f1)
		return (false);
	return (true);
};

bool	Fixed::operator>(const Fixed& f1)
{
	if (this > &f1)
		return (true);
	return (false);
};

bool	Fixed::operator<(const Fixed& f1)
{
	if (this > &f1)
		return (false);
	return (true);
};

bool	Fixed::operator>=(const Fixed& f1)
{
	if (this >= &f1)
		return (true);
	return (false);
};

bool	Fixed::operator<=(const Fixed& f1)
{
	if (this <= &f1)
		return (true);
	return (false);
};

std::ostream& operator<<(std::ostream& output, const Fixed& f1)
{
	return output << (f1.toFloat());
}

int Fixed::getRawBits( void ) const
{
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