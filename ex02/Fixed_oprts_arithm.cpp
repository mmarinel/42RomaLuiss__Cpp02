/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_oprts_arithm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:51:37 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/05 20:01:34 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed&	Fixed::operator<<(const int bits)
{
	this->val = this->val << bits;

	return (*this);
}

Fixed&	Fixed::operator>>(const int bits)
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
	this->val *= nbr.getRawBits();
	// float	q = nbr.getRawBits();
	// float	y = this->getRawBits();
	// std::cout << "multiplying " << q << " with " << y << std::endl;
	this->val = this->val >> _frac_bits;

	return (*this);
}

Fixed&	Fixed::operator/(const Fixed &nbr)
{
	this->val /= nbr.getRawBits();
	this->val = this->val << _frac_bits;

	return (*this);
}

float	Fixed::operator++(int nbr)
{
	nbr = this->toFloat();
	*this = Fixed(this->toFloat() + machine_epsilon());

	return (nbr);
}

float	Fixed::operator++()
{
	*this = Fixed(this->toFloat() + machine_epsilon());

	return (this->toFloat());
}

float	Fixed::operator--(int nbr)
{
	nbr = this->toFloat();
	*this = Fixed(this->toFloat() - machine_epsilon());


	return (nbr);
}

float	Fixed::operator--()
{
	*this = Fixed(this->toFloat() - machine_epsilon());

	return (this->toFloat());
}
