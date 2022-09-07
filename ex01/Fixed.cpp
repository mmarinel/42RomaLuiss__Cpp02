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

float	Fixed::toFloat( void ) const
{
	return ((float)this->val / (1 << _frac_bits));//* this is (e.g.) 11.01 / 2^(_frac_bits) ---> right-shifting the decimal point!
}

int		Fixed::toInt( void ) const
{
	return ((int)this->toFloat());
}

std::ostream&	operator << (std::ostream& ostr, const Fixed& fixed)
{
	ostr << fixed.toFloat();

	return (ostr);
}

int		Fixed::getRawBits( void ) const
{
	print_line("getRawBits member function called", BOLDCYAN);

	return (this->val);
}

void	Fixed::setRawBits( int const raw )
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

Fixed::Fixed(const int val)
{
	print_line("Int constructor called", BOLDGREEN);

	this->val = val << _frac_bits;
}

Fixed::Fixed(const float val)
{
	print_line("Float constructor called", BOLDGREEN);

	this->val = roundf(val * (1 << _frac_bits));//* this is (e.g.) 11.01 * 2^(_frac_bits) ---> right-shifting the decimal point!
}

Fixed&	Fixed::operator = (const Fixed &to_copy)
{
	print_line("Copy assignment operator called", BOLDBLUE);

	this->val = to_copy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	print_line("<<Fixed destroyed>>", RED);
}
