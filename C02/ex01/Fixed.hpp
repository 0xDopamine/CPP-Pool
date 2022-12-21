/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:57:41 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/21 20:43:24 by mbaioumy         ###   ########.fr       */
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
		float   toFloat( void ) const;
		int		toInt( void ) const;
} ;

std::ostream& operator<<(std::ostream& output, const Fixed&f1);

#endif