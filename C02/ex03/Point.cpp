/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:16:41 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/22 20:36:13 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): x(0), y(0) { };

Point::Point(const float& x, const float& y): x(x), y(y) { };

Point::Point(const Point& other) : x(other.x), y(other.y){ };

Point::~Point() {};

Point&	Point::operator=(const Point& p1)
{
	(Fixed)x = p1.x;
	(Fixed)y = p1.y;
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

	alpha = ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))) / 2;
	bravo = ((point.getX() * (a.getY() - b.getY())) + (a.getX() * (b.getY() - point.getY())) + (b.getX() * (point.getY() - a.getY()))) / 2;
	charlie = ((point.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - point.getY())) + (c.getX() * (point.getY() - b.getY()))) / 2;
	echo = ((point.getX() * (a.getY() - c.getY())) + (a.getX() * (c.getY() - point.getY())) + (c.getX() * (point.getY() - a.getY()))) / 2;

	if (alpha < 0)
		alpha = alpha * -1;
	if (bravo < 0)
		bravo = bravo * -1;
	if (charlie < 0)
		charlie = charlie * -1;
	if (echo < 0)
		echo = echo * -1;
	
	Fixed	testAlpha = bravo + charlie + echo;

	if (testAlpha == alpha)
		return (true);
	else
		return (false);
}