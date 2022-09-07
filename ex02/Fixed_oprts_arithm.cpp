/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_oprts_arithm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:51:37 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/07 10:12:44 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const Fixed	Fixed::operator-( void ) const
{
	Fixed	neg;

	neg.setRawBits(-this->val);
	
	return (neg);
}

const Fixed&	Fixed::operator<<(const int32_t bits)
{
	this->val = this->val << bits;

	return (*this);
}

const Fixed&	Fixed::operator>>(const int32_t bits)
{
	this->val = this->val >> bits;

	return (*this);
}

const Fixed	Fixed::operator+(const Fixed &nbr) const
{
	Fixed	ret;

	ret.setRawBits (this->val + nbr.getRawBits());
	
	return (ret);
}

const Fixed	Fixed::operator-(const Fixed &nbr) const
{
	Fixed	ret;
	
	ret.setRawBits (this->val - nbr.getRawBits());

	return (ret);
}

const Fixed	Fixed::operator*(const Fixed &nbr) const
{
	Fixed	ret;

	ret.setRawBits ((int64_t(this->val) * int64_t(nbr.getRawBits())) >> _frac_bits);

	return (ret);
}

const Fixed	Fixed::operator/(const Fixed &nbr) const
{
	Fixed	ret;

	ret.setRawBits ((int64_t(this->val) << _frac_bits) / int64_t(nbr.getRawBits()));

	return (ret);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
const Fixed	Fixed::operator++(int32_t nbr)
{
	const Fixed	old = *this;
	this->val = this->val + 1;

	return (old);
}
#pragma GCC diagnostic pop

Fixed&	Fixed::operator++()
{
	this->val = this->val + 1;

	return (*this);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
const Fixed	Fixed::operator--(int32_t nbr)
{
	const Fixed	old = *this;
	this->val = this->val - 1;

	return (old);
}
#pragma GCC diagnostic pop

Fixed&	Fixed::operator--()
{
	this->val = this->val - 1;

	return (*this);
}
