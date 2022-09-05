/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_oprts_misc.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:50:11 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/05 19:21:06 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream&	operator << (std::ostream& ostr, const Fixed& fixed)
{
	ostr << fixed.toFloat();

	return (ostr);
}

Fixed&	Fixed::operator = (const Fixed &to_copy)
{
	print_line("Copy assignment operator called", BOLDBLUE);

	this->val = to_copy.getRawBits();
	return (*this);
}
