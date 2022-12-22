/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:41:56 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/22 20:37:19 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int	main( void ) {

	Point	a(-2, 4.12f);
	Point	b(2.22f, 1);
	Point	c(-3, -2.40f);

	Point	point(1, 5);

	if (bsp(a, b, c, point))
		std::cout << "inside" << std::endl;
	else
		std::cout << "outside" << std::endl;
	return 0;
}