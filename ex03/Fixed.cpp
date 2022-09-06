/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:46:51 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/04 15:46:33 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->val / (1 << _frac_bits));//* this is (e.g.) 11.01 / 2^(_frac_bits) ---> right-shifting the floating point!
}

int32_t		Fixed::toInt( void ) const
{
	return ((int32_t)this->toFloat());
}

int32_t		Fixed::getRawBits( void ) const
{
	return (this->val);
}

void	Fixed::setRawBits( int32_t const raw )
{
	this->val = raw;
}

Fixed::Fixed()
{
	this->val = 0;
}

Fixed::Fixed(const Fixed &to_copy)
{
	*this = to_copy;
}

Fixed::Fixed(const int32_t val)
{
	this->val = val << _frac_bits;
}

Fixed::Fixed(const float val)
{
	this->val = roundf(val * (1 << _frac_bits));//* this is (e.g.) 11.01 * 2^(_frac_bits) ---> right-shifting the floating point!
}

Fixed::~Fixed()
{
}
