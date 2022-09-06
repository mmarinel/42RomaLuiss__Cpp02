/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_oprts_arithm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:51:37 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/06 10:53:27 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed&	Fixed::operator<<(const int32_t bits)
{
	this->val = this->val << bits;

	return (*this);
}

Fixed&	Fixed::operator>>(const int32_t bits)
{
	this->val = this->val >> bits;

	return (*this);
}

Fixed&	Fixed::operator+(const Fixed &nbr)
{
	this->val += nbr.getRawBits();

	return (*this);
}

Fixed&	Fixed::operator-(const Fixed &nbr)
{
	this->val -= nbr.getRawBits();

	return (*this);
}

Fixed&	Fixed::operator*(const Fixed &nbr)
{
	this->val = (int64_t(this->val) * int64_t(nbr.getRawBits())) >> _frac_bits;

	return (*this);
}

Fixed&	Fixed::operator/(const Fixed &nbr)
{
	this->val = (int64_t(this->val) << _frac_bits) / int64_t(nbr.getRawBits());

	return (*this);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
float	Fixed::operator++(int32_t nbr)
{
	float	old = this->toFloat();
	this->val = this->val + 1;

	return (old);
}
#pragma GCC diagnostic pop

float	Fixed::operator++()
{
	this->val = this->val + 1;

	return (this->toFloat());
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
float	Fixed::operator--(int32_t nbr)
{
	float	old = this->toFloat();
	this->val = this->val - 1;

	return (old);
}
#pragma GCC diagnostic pop

float	Fixed::operator--()
{
	this->val = this->val - 1;

	return (this->toFloat());
}
