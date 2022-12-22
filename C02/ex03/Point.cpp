/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:16:41 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/22 19:12:41 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): x(0), y(0) { };

Point::Point(const float& x, const float& y): x(x), y(y) { 
	std::cout << "constructor init: " << x << " " << y << std::endl;
};

Point::Point(const Point& other) : x(other.x), y(other.y){ };

Point::~Point() {};

Point&	Point::operator=(const Point& p1)
{
	// std::cout << "copy assignment operator " << p1.x << std::endl;
	// std::cout << "copy assignment operator " << p1.y << std::endl;
	(Fixed)x = p1.x;
	(Fixed)y = p1.y;
	// std::cout << "copy assignment operator " << this->x << std::endl;
	// std::cout << "copy assignment operator " << this->y << std::endl;
	return *this;
} ;

Fixed	Point::getX( void ) const {
	return x;
}

Fixed	Point::getY ( void ) const {
	return y;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	// area of ABC
	Fixed	alpha;
	// area of PAB
	Fixed	bravo;
	// area of PBC
	Fixed	charlie;
	// area of PAC
	Fixed	echo;

	std::cout << "a: " << std::endl << "x: " << a.getX() << std::endl << "y: " << a.getY() << std::endl;
	std::cout << "b: " << std::endl << "x: " << b.getX() << std::endl << "y: " << b.getY() << std::endl;
	std::cout << "c: " << std::endl << "x: " << c.getX() << std::endl << "y: " << c.getY() << std::endl;
	std::cout << "point: " << std::endl << "x: " << point.getX() << std::endl << "y: " << point.getY() << std::endl;

	
	alpha = ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))) / 2;
	bravo = ((point.getX() * (a.getY() - b.getY())) + (a.getX() * (b.getY() - point.getY())) + (b.getX() * (point.getY() - a.getY()))) / 2;
	charlie = ((point.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - point.getY())) + (c.getX() * (point.getY() - b.getY()))) / 2;
	echo = ((point.getX() * (a.getY() - c.getY())) + (a.getX() * (c.getY() - point.getY())) + (c.getX() * (point.getY() - a.getY()))) / 2;

	Fixed	testAlpha = bravo + charlie + echo;

	std::cout << "alpha: " << alpha << std::endl;
	std::cout << "bravo: " << bravo << std::endl;
	std::cout << "charlie: " << charlie << std::endl;
	std::cout << "echo: " << echo << std::endl;
	std::cout << "testAlpha: " << testAlpha << std::endl;

	if (testAlpha == alpha)
		return (true);
	else
		return (false);
}