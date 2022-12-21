/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:57:41 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/21 22:08:55 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
		static const int fractionalBits = 8;
		int              fixedPointValue;
	public:
		Fixed();
		Fixed(const Fixed& f1);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		int     getRawBits( void ) const ;
		void    setRawBits ( int const raw );
		Fixed&  operator=(const Fixed& f1);
		Fixed	operator+(const Fixed& f1);
		Fixed	operator*(const Fixed& f1);
		Fixed	operator-(const Fixed& f1);
		Fixed	operator/(const Fixed& f1);
		Fixed	operator++(int);
		Fixed&	operator++( void );
		Fixed	operator--(int);
		Fixed&	operator--( void );
		bool	operator==(const Fixed& f1);
		bool	operator!=(const Fixed &f1);
		bool	operator>(const Fixed& f1);
		bool	operator<(const Fixed& f1);
		bool	operator>=(const Fixed& f1);
		bool	operator<=(const Fixed& f1);
		static Fixed	max(Fixed& f1, Fixed& f2);
		static const Fixed&	max(const Fixed& f1, const Fixed& f2);
		float   toFloat( void ) const;
		int		toInt( void ) const;
} ;

std::ostream& operator<<(std::ostream& output, const Fixed&f1);


#endif