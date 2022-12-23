/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:16:41 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/23 17:46:09 by mbaioumy         ###   ########.fr       */
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

bool	vertex(Point const a, Point const b, Point const c, Point const point)
{
	if ((a.getX() == point.getX() && a.getY() == point.getY()) || 
		(b.getX() == point.getX() && b.getY() == point.getY()) ||
		(c.getX() == point.getX() && c.getY() == point.getY()))
		return (true);
	return (false);
}

bool	isCollinear(Point const point, Point const a, Point const b)
{
	return ((point.getY() - a.getY()) * (point.getX() - b.getX()) == (point.getY() - b.getY()) * (point.getX() - a.getX()));	
}

bool	isOnEdge(Point const a, Point const b, Point const c, Point const point)
{
	if (isCollinear(point, a, b))
	{
		if (point.getX() >= Fixed::min(a.getX(), b.getX()) &&
			point.getX() <= Fixed::max(a.getX(), b.getX()) &&
			point.getY() >= Fixed::min(a.getY(), b.getY()) &&
			point.getY() <= Fixed::max(a.getY(), b.getY()))
				return (true);
	}
	if (isCollinear(point, a, c))
	{
		if (point.getX() >= Fixed::min(a.getX(), c.getX()) &&
			point.getX() <= Fixed::max(a.getX(), c.getX()) &&
			point.getY() >= Fixed::min(a.getY(), c.getY()) &&
			point.getY() <= Fixed::max(a.getY(), c.getY()))
				return (true);
	}
	if (isCollinear(point, b, c))
	{
		if (point.getX() >= Fixed::min(b.getX(), c.getX()) &&
			point.getX() <= Fixed::max(b.getX(), c.getX()) &&
			point.getY() >= Fixed::min(b.getY(), c.getY()) &&
			point.getY() <= Fixed::max(b.getY(), c.getY()))
				return (true);
	}
	return (false);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	alpha;
	Fixed	bravo;
	Fixed	charlie;
	Fixed	echo;

	alpha = ((a.getX() * (b.getY() - c.getY())) + 
			(b.getX() * (c.getY() - a.getY())) +
			(c.getX() * (a.getY() - b.getY()))) / 2;
	bravo = ((point.getX() * (a.getY() - b.getY())) +
			(a.getX() * (b.getY() - point.getY())) +
			(b.getX() * (point.getY() - a.getY()))) / 2;
	charlie = ((point.getX() * (b.getY() - c.getY())) +
			(b.getX() * (c.getY() - point.getY())) +
			(c.getX() * (point.getY() - b.getY()))) / 2;
	echo = ((point.getX() * (a.getY() - c.getY())) +
			(a.getX() * (c.getY() - point.getY())) +
			(c.getX() * (point.getY() - a.getY()))) / 2;

	if (alpha < 0)
		alpha = alpha * -1;
	if (bravo < 0)
		bravo = bravo * -1;
	if (charlie < 0)
		charlie = charlie * -1;
	if (echo < 0)
		echo = echo * -1;

	Fixed	testAlpha = bravo + charlie + echo;

	if (testAlpha == alpha && !vertex(a, b, c, point) && !isOnEdge(a, b, c, point))
		return (true);
	else
		return (false);
}