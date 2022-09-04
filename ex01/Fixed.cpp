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
	int		int_part;
	float	frac_part;

	int_part = this->val / int_pow(10, _frac_prt);
	frac_part = ((float)(this->val - int_part)) * (1.0 / int_pow(10, _frac_prt));
	return (int_part + frac_part);
}

int		Fixed::getRawBits( void )
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

Fixed::Fixed(Fixed &to_copy)
{
	print_line("Copy constructor called", BOLDGREEN);

	*this = to_copy;
}

Fixed::Fixed(const int val)
{
	print_line("Int constructor called", BOLDGREEN);

	this->val = val << _frac_prt;
}

static int	decimals(float decimal);

Fixed::Fixed(const float val)
{
	print_line("float constructor called", BOLDGREEN);

}

static int	decimals(float decimal)
{
	int	digits;

	while (decimal *= 10)
		digits++;
}

Fixed&	Fixed::operator = (Fixed &to_copy)
{
	print_line("Copy assignment operator called", BOLDBLUE);

	this->val = to_copy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	print_line("<<Fixed destroyed>>", RED);
}
