/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:25:20 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/07 10:05:02 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

const Fixed& Point::getX( void ) const
{
	return (this->x);
}

const Fixed& Point::getY( void ) const
{
	return (this->y);
}

Point&	Point::operator=( const Point& pt )
{
	if (pt.getX() == 0)
		;
	return (*this);
}

Point::Point( const float x, const float y ) : x(x), y(y)
{
}

Point::Point( const Point& pt ): x(pt.getX()), y(pt.getY())
{
}

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
}

Point::~Point()
{
}
