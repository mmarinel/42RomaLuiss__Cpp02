/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:44:14 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/06 19:37:37 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "bsp.hpp"
#include <iostream>

int	main ( void )
{
	Point	a(1.2f, 0.0f);
	Point	b(2.7f, 3.1f);
	Point	c(3.0f, 2.8f);

	Point	toss(1.2f + 0.00872f, 0.0f + 0.1f);
	if (bsp(a, b, c, toss))
		std::cout << BOLDGREEN << "inside triangle" << RESET << std::endl;
	else
		std::cout << BOLDRED << "outside triangle" << RESET << std::endl;
	return 0;
}
