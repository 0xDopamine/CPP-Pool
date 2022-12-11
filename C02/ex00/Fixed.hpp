/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:57:41 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/08 20:21:55 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        static const int fractionalBits = 8;
        int              fixedPointValue;
    public:
        Fixed();
        Fixed(const Fixed& f1);
        ~Fixed();
        int     getRawBits( void ) const ;
        void    setRawBits ( int const raw );
        Fixed&  operator=(const Fixed& f1);
} ;

#endif