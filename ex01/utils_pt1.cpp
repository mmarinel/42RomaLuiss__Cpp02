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

static int	fract_part_as_int(float nbr);
static int	fract_part_rec(float *fract_part);
//* end of static declarations

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

/**
 * @brief this function returns the length
 * of the representation of integer [nbr] in base [radix]
 * 
 * @param nbr 
 * @param radix 
 * @return int 
 */
int		int_len(int	nbr, int radix)
{
	if (nbr < radix)
		return (1);
	return (1 + int_len(nbr / radix, radix));
}

/**
 * @brief this function pads nbr with [bits] bits.
 * A right-padding is applied if [opt] is 1,
 * otherwise a left-padding is applied.
 * 
 * @param nbr 
 * @param bits 
 * @param opt 
 */
void	int_bit_pad(int *nbr, int bits, bool opt)
{
	if (opt <= 0)
		return ;
	else
	{
		if (opt)
			*nbr << bits;
		else
			*nbr >> bits;
	}
}

void	float_split(float nbr, int *integral_part, int *fract_part)
{
	*integral_part = (int)nbr;
	fract_part_rec(nbr - *integral_part, fract_part);
}

/**
 * @brief this function recursively takes the fractional part
 * of a floating point number and stores it in int result
 * 
 * @param decimal floating point number with no digits before the dot
 * @param result int variable where to store fractional part as int
 * @return int the weight of the previous digit of the fractional part
 */
static int	fract_part_rec(float decimal, int *result)
{
	float	normalized;
	int		integral_part;
	float	fract_part;
	int		weight;

	if (0 == decimal)
		return (0);
	normalized = decimal * 10;
	integral_part = (int)normalized;
	fract_part = normalized - integral_part;
	weight = fract_part_rec(fract_part, result);
	*result += integral_part * int_pow(10, weight);
	return (weight + 1);
}
