/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:21:08 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/06 18:10:58 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

# include "../colors.hpp"
# include "Fixed.hpp"
# include "utils.hpp"
# include <iostream>

class Point
{
private:
	Fixed const	x;
	Fixed const	y;
public:
	const Fixed&	getX( void ) const;
	const Fixed&	getY( void ) const;
					Point( const float x, const float y );
					Point( const Point& pt);
	Point&			operator=( const Point& pt );
					Point();
					~Point();
};


#endif /* POINT_H */
