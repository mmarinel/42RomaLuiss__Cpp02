/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:38:39 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/06 15:04:02 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H

# include <iostream>
# include <cstdarg>
# include "Fixed.hpp"
# include "Point.hpp"
# include "../colors.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);
void	print_line(const char *str, const char *color);
float	ft_min( float arr[], int len, int rank);

#endif /* UTILS_H */
