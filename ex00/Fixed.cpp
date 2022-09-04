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
