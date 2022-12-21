/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:16:41 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/22 00:49:07 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): x(0), y(0) { };

Point::Point(const float x, const float y): x(x), y(y) { };

Point::Point(const Point&) {};

Point::~Point() {};

Point&	Point::operator=(const Point& p1) { 
	
	(Fixed)x = p1.x;
	(Fixed)y = p1.y;
	return *this;
}

float	Point::getX( void ) {
	return x.toFloat();
}

float	Point::getY ( void ) {
	return y.toFloat();
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	// area of ABC
	float	alpha;
	// area of PAB
	float	bravo;
	// area of PBC
	float	charlie;
	// area of PAC
	float	echo;

	alpha = a.getX();

}