/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pt1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:39:02 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/06 10:32:24 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void	print_line(const char *str, const char *color)
{
	std::cout << color << str << RESET << std::endl;
}

float	machine_epsilon( void )
{
	float	half_epsilon = 1;

	while (1 + half_epsilon > 1)
		half_epsilon /= 2;
	std::cout << BOLDRED << "epsilon is: " << half_epsilon * 2 << std::endl;
	return (half_epsilon * 2);
}
