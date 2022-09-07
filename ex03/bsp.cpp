/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:46:48 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/07 10:59:16 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

static Fixed	squaredTriangleArea( Point const a, Point const b, Point const c );
static Fixed	squaredDistance( Point const a, Point const b );
static Fixed	pointSummedUpArea( Point const a, Point const b, Point const c, Point const point );
//* end of static declarations

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	Fixed	area = squaredTriangleArea(a, b, c);

	return (
		Fixed(
			area - pointSummedUpArea(a, b, c, point)
		).abs()
		<= Fixed::tolerance()
	);
}

static Fixed	pointSummedUpArea( Point const a, Point const b, Point const c,
					Point const point )
{
	return (
		squaredTriangleArea(point, a, b)
		+ squaredTriangleArea(point, a, c)
		+ squaredTriangleArea(point, b, c)
	);
}

static Fixed	squaredDistance( Point const p_1, Point const p_2 )
{
	return (
		(p_1.getX() - p_2.getX()) * (p_1.getX() - p_2.getX())
		+ (p_1.getY() - p_2.getY()) * (p_1.getY() - p_2.getY())
	);
}

static Fixed	squaredTriangleArea( Point const a, Point const b, Point const c )
{
	Fixed	sides[3]
		= 
		{
			squaredDistance(a, b),
			squaredDistance(a, c),
			squaredDistance(b, c)
		};
	Fixed::insSort(sides, 3);

	return ((sides[0] * sides[1]) / 4);
}
