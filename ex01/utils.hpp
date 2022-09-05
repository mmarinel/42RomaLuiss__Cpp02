/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:37:43 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/05 10:15:01 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_UTILS_H
#define COMMON_UTILS_H

# include "../colors.hpp"
# include <iostream>

void	print_line(const char *str, const char *color);
int		int_pow(int nbr, int exp);
int		int_len(int	nbr, int radix);
void	float_split(float nbr, int *integral_part, int *fract_part);
void	int_bit_pad(int *nbr, int bits, bool opt);

#endif /* COMMON_UTILS_H */
