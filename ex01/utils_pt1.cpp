/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pt1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:39:02 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/04 17:50:51 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void	print_line(const char *str, const char *color)
{
	std::cout << color << str << RESET << std::endl;
}

int		int_pow(int nbr, int exp)
{
	if (0 == exp)
		return (1);
	return (nbr * int_pow(nbr, exp - 1));
}

int		int_len(int nbr)
{
	if (nbr < 0)
		return (int_len(-nbr));
	else
	{
		if (nbr < 10)
			return (1);
		return (1 + int_len(nbr / 10));
	}
}
