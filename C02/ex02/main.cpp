/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:41:56 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/22 19:23:45 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main( void ) {

	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed const c( Fixed(4.0f) / Fixed(2.5f));
    Fixed d(2.5f);
    Fixed f(2.5f);
    Fixed I(2);
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
    // Fixed c(Fixed(2) * Fixed(2));
    // Fixed a(1);
    // std::cout << "the min nbr of a: " << a << " and b: " << b << " is a: " << Fixed::min( a, b ) << std::endl;
    if (a >= b)
        std::cout << "a: " << a << " is bigger or equal than b: " << b << " ===> a >= b" << std::endl;
    else
        std::cout << "b: " << b << " is bigger or equal than a: " << a << " ===> b >= a" << std::endl;
     if (c <= b)
        std::cout << "c: " << c << " is smaller or equal than b: " << b << " ===> c <= b" << std::endl;
    else
        std::cout << "b: " << b << " is smaller or equal than c: " << c << " ===> b <= c" << std::endl;
    if (a < b)
        std::cout << "a: " << a << " is smaller than b: " << b << " ===> a < b" << std::endl;
    else
        std::cout << "b: " << b << " is smaller than a: " << a << " ===> a > b" << std::endl;
     if (c > b)
        std::cout << "c: " << c << " is bigger than b: " << b << " ===> c > b" << std::endl;
    else
        std::cout << "b: " << b << " is bigger than c: " << c << " ===> b > c" << std::endl;
    if ( d == f )
        std::cout << "d: " << d << " is equal to f: " << f << " ===> d == f" << std::endl;
    if (b != c)
        std::cout << "b: " << b << " and c: " << c << " aren't equal " << "===> b != c" << std::endl;
    if (d != I)
        std::cout << "d: " << d << " and I: " << I << " aren't equal " << "===> d != I" << std::endl;

	return 0;
}