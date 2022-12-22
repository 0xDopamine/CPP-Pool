/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:13:24 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/22 18:28:11 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point 
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float& x, const float& y);
		Point(const Point&);
		~Point();
		void	setX(Fixed x1);
		void	setY(const Fixed y1);
		Point&	operator=(const Point& p1);
		Fixed	getX( void ) const;
		Fixed	getY( void ) const;
} ;

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif