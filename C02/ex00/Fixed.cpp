/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 00:29:59 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/11 00:29:59 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixedPointValue(0) { std::cout << "Default constructor called" << std::endl; };

Fixed::Fixed(const Fixed& f1): fixedPointValue(f1.fixedPointValue)
{
	std::cout << "Copy constructor called" << std::endl;
};

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; };

Fixed&	Fixed::operator=(const Fixed& f1)
{
	fixedPointValue = f1.fixedPointValue;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
};

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPointValue;
};

void    Fixed::setRawBits( int const raw ) { fixedPointValue = raw; };