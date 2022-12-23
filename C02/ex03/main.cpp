/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:41:56 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/23 17:46:40 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int	main( void ) {

	Point	a(2, 3);
	Point	b(3, 1);
	Point	c(1, 1);

	Point	point(2, 1);

	if (bsp(a, b, c, point))
		std::cout << "inside" << std::endl;
	else
		std::cout << "outside" << std::endl;
	return 0;
}