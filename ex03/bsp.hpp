/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:16:05 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/07 10:03:49 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_H
#define BSP_H

# include "Fixed.hpp"
# include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif /* BSP_H */
