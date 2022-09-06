/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:25:20 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/06 18:14:36 by mmarinel         ###   ########.fr       */
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
	print_line("Point: Copy assignment operator called", BOLDBLUE);

	if (pt.getX() == 0)
		;
	return (*this);
}

Point::Point( const float x, const float y ) : x(x), y(y)
{
	print_line("Point: Float constructor called", BOLDGREEN);
}

Point::Point( const Point& pt ): x(pt.getX()), y(pt.getY())
{
	print_line("Point: Copy constructor called", BOLDGREEN);
}

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
	print_line("Point: Default constructor called", GREEN);
}

Point::~Point()
{
	print_line("<<Fixed destroyed>>", RED);
}
