/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pt1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:39:02 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/05 19:08:41 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void	print_line(const char *str, const char *color)
{
	std::cout << color << str << RESET << std::endl;
}

float	machine_epsilon( void )
{
	float		epsilon = 1;

	while (1 + epsilon > 1)
		epsilon /= 2;
	return (epsilon * 2);
}
