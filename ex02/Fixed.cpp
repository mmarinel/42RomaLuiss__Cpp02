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

// float	Fixed::machine_epsilon( void )
// {
// 	Fixed		prog(1);
// 	const Fixed	unit(1);
// 	Fixed		epsilon;

// 	do
// 	{
// 		epsilon = prog;
// 		prog = prog >> 2;
// 	} while(prog + unit > unit);
// 	return (epsilon.toFloat());
// }

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
	print_line("getRawBits member function called", BOLDCYAN);

	return (this->val);
}

void	Fixed::setRawBits( int32_t const raw )
{
	print_line("setRawBits member function called", BOLDCYAN);

	this->val = raw;
}

Fixed::Fixed()
{
	print_line("Default constructor called", GREEN);

	this->val = 0;
}

Fixed::Fixed(const Fixed &to_copy)
{
	print_line("Copy constructor called", BOLDGREEN);

	*this = to_copy;
}

Fixed::Fixed(const int32_t val)
{
	print_line("Int constructor called", BOLDGREEN);

	this->val = val << _frac_bits;
}

Fixed::Fixed(const float val)
{
	print_line("Float constructor called", BOLDGREEN);

	this->val = roundf(val * (1 << _frac_bits));//* this is (e.g.) 11.01 * 2^(_frac_bits) ---> right-shifting the floating point!
}

Fixed::~Fixed()
{
	print_line("<<Fixed destroyed>>", RED);
}
