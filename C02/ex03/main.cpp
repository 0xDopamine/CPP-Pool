/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:41:56 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/22 19:06:49 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int	main( void ) {

	Point	a(2, 3);
	Point	b(3, 1);
	Point	c(1, 1);

	Point	point(2, 2);

	std::cout << "---------------" << std::endl;
	std::cout << "a: " << std::endl << "x: " << a.getX() << std::endl << "y: " << a.getY() << std::endl;
	// std::cout << "b: " << std::endl << "x: " << b.getX() << std::endl << "y: " << b.getY() << std::endl;
	// std::cout << "c: " << std::endl << "x: " << c.getX() << std::endl << "y: " << c.getY() << std::endl;
	// std::cout << "point: " << std::endl << "x: " << point.getX() << std::endl << "y: " << point.getY() << std::endl;
	
	if (bsp(a, b, c, point))
		std::cout << "inside" << std::endl;
	else
		std::cout << "outside" << std::endl;
	return 0;
}