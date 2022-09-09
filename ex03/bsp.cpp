/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:46:48 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/09 14:21:47 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	Fixed	_YcMinusYa = c.getY() - a.getY();
	Fixed	_XcMinusXa = c.getX() - a.getX();
	Fixed	w1 =(
		(
			_YcMinusYa*(point.getX() - a.getX())
			- (point.getY() - a.getY())*_XcMinusXa
		)
		/
		(
			_YcMinusYa*(b.getX() - a.getX())
			- (b.getY() - a.getY())*_XcMinusXa
		)
	);
	Fixed	w2 =(
		(
			point.getY() - a.getY() - w1 * (b.getY() - a.getY())
		)
		/
		(
			_YcMinusYa
		)
	);
	return (
		w1 > 0 &&
		w2 > 0 &&
		w1 + w2 < Fixed(1)
	);
}
