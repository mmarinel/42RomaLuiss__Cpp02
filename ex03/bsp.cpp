/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:46:48 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/09 15:32:46 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

bool	line_case( Point const a, Point const b, Point const c, Point const point );
//* end of static declarations

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	if ( 
		(a.getX() == b.getX() && b.getX() == c.getX()) ||
		(a.getY() == b.getY() && b.getY() == c.getY())
	)
		return (line_case(a, b, c, point));
	Fixed	_YcMinusYa = c.getY() - a.getY();
	Fixed	_XcMinusXa = c.getX() - a.getX();
	Fixed	w1 =(
		(_YcMinusYa*(point.getX() - a.getX()) - (point.getY() - a.getY())*_XcMinusXa)
		/
		(_YcMinusYa*(b.getX() - a.getX()) - (b.getY() - a.getY())*_XcMinusXa)
	);
	Fixed	w2 =(
		(point.getY() - a.getY() - w1 * (b.getY() - a.getY()))
		/
		(_YcMinusYa)
	);
	return (
		w1 > 0 &&
		w2 > 0 &&
		w1 + w2 < Fixed(1)
	);
}

bool	line_case( Point const a, Point const b, Point const c, Point const point )
{
	if ((a.getX() == b.getX() && b.getX() == c.getX()))
		return (
			point.getX() == a.getX() &&
			(
				point.getY() >= a.getY()
				|| point.getY() >= b.getY()
				|| point.getY() >= c.getY()
			) &&
			(
				point.getY() <= a.getY()
				|| point.getY() <= b.getY()
				|| point.getY() <= c.getY()
			)
		);
	else
		return (
			point.getY() == a.getY() &&
			(
				point.getX() >= a.getX()
				|| point.getX() >= b.getX()
				|| point.getX() >= c.getX()
			) &&
			(
				point.getX() <= a.getX()
				|| point.getX() <= b.getX()
				|| point.getX() <= c.getX()
			)
		);
}
