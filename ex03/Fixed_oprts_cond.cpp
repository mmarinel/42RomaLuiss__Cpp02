/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_oprts_cond.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:47:16 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/05 15:58:43 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool	Fixed::operator>(const Fixed &nbr) const
{
	return (this->val > nbr.getRawBits());
}

bool	Fixed::operator>=(const Fixed &nbr) const
{
	return (this->val >= nbr.getRawBits());
}

bool	Fixed::operator<(const Fixed &nbr) const
{
	return (this->val < nbr.getRawBits());
}

bool	Fixed::operator<=(const Fixed &nbr) const
{
	return (this->val <= nbr.getRawBits());
}

bool	Fixed::operator==(const Fixed &nbr) const
{
	return (this->val == nbr.getRawBits());
}

bool	Fixed::operator!=(const Fixed &nbr) const
{
	return (this->val != nbr.getRawBits());
}
