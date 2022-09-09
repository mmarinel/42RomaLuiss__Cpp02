/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:44:14 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/09 15:04:37 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "bsp.hpp"
#include <iostream>
#include <iomanip>

static	void	bsp_check( Point a, Point b, Point c,
					Point toss );
//* end of static declarations

int	main ( void )
{
	bsp_check(Point(1, 2), Point(11, 2), Point(6, 8), Point(11.3f, 2));
	bsp_check(Point(1, 0), Point(5, -3), Point(4, 4), Point(3, 2.5));
	bsp_check(Point(1, 0), Point(5, -3), Point(4, 4), Point(3, 2.7));
	bsp_check(Point(0, 0), Point(1, 0), Point(0.5, 1), Point(0.5, 0.5));
	bsp_check(Point(0, 0), Point(6, 0), Point(3, 5), Point(3, 1));
	bsp_check(Point(0, 0), Point(16, 0), Point(8, 12), Point(8, 5));
	bsp_check(Point(0, 0), Point(3, 5), Point(3, -5), Point(1.5, 0));
	bsp_check(Point(1.2f, 0.0f), Point(2.7f, 3.1f), Point(3.0f, 2.8f), Point(1.3f + 0.00872f, 0.0f + 0.1f));
	bsp_check(Point(1, 0), Point(2, 0), Point(3, 0), Point(1.5, 0));
	bsp_check(Point(1, 0), Point(2, 0), Point(3, 0), Point(3.1, 0));
	bsp_check(Point(5, 0), Point(5, 1.3f), Point(5, 11), Point(3.1, 0));
	bsp_check(Point(5, 0), Point(5, 1.3f), Point(5, 11), Point(5, 10.5));
	bsp_check(Point(5, 0), Point(5, 1.3f), Point(5, 11), Point(5, 11.1f));
	return 0;
}

static	void	bsp_check( Point a, Point b, Point c,
					Point toss )
{
	std::cout << "point (" << toss.getX() << ", " << toss.getY() << ")" << std::endl;
	if (bsp(a, b, c, toss))
		std::cout << BOLDGREEN << "\tinside triangle" << RESET;
	else
		std::cout << BOLDRED << "\toutside triangle" << RESET;
	std::cout
		<< std::endl
		<< "\t\ta (" << a.getX() << ", " << a.getY() << ")"
		<< "\t\tb (" << b.getX() << ", " << b.getY() << ")"
		<< "\t\tc (" << c.getX() << ", " << c.getY() << ")"
		<< std::endl
		<< "**************************************************************************"
		<< std::endl;
}

