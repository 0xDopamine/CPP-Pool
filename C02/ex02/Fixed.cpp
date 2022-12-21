/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 00:29:59 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/21 21:47:40 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixedPointValue(0) { std::cout << "Default constructor called" << std::endl; };

Fixed::Fixed(const Fixed& f1)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f1;
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

bool	Fixed::operator==(const Fixed& f1)
{
	if (this == &f1)
		return (true);
	std::cout << "Equal assignment operator called" << std::endl;
	return (false);
};

bool	Fixed::operator!=(const Fixed& f1)
{
	if (this == &f1)
		return (false);
	std::cout << "Equal assignment operator called" << std::endl;
	return (true);
};

bool	Fixed::operator>(const Fixed& f1)
{
	if (this > &f1)
		return (true);
	std::cout << "Equal assignment operator called" << std::endl;
	return (false);
};

bool	Fixed::operator<(const Fixed& f1)
{
	if (this > &f1)
		return (false);
	std::cout << "Equal assignment operator called" << std::endl;
	return (true);
};

bool	Fixed::operator>=(const Fixed& f1)
{
	if (this >= &f1)
		return (true);
	std::cout << "Equal assignment operator called" << std::endl;
	return (false);
};

bool	Fixed::operator<=(const Fixed& f1)
{
	if (this <= &f1)
		return (true);
	std::cout << "Equal assignment operator called" << std::endl;
	return (false);
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