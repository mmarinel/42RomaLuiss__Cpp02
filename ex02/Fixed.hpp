/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:06:17 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/06 11:04:57 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

# include "../colors.hpp"
# include "utils.hpp"
# include <iostream>

# include <cmath>

class Fixed
{
private:
	int32_t						val;
	static const int		_frac_bits = 8;
public:
	float					toFloat( void ) const;
	int32_t					toInt( void ) const;
	int32_t					getRawBits( void ) const;
	void					setRawBits( int32_t const raw );

	//* arithmetic
	Fixed&					operator+(const Fixed &nbr);
	Fixed&					operator-(const Fixed &nbr);
	Fixed&					operator*(const Fixed &nbr);
	Fixed&					operator/(const Fixed &nbr);
	Fixed&					operator<<(const int32_t bits);
	Fixed&					operator>>(const int32_t bits);

	//* increment and decrement
	float					operator++();//* pre-fix
	float					operator++(int32_t nbr);//* post-fix -----nbr is used as discriminator
	float					operator--();
	float					operator--(int32_t nbr);

	//* conditions
	bool					operator>(const Fixed &nbr) const;
	bool					operator>=(const Fixed &nbr) const;
	bool					operator<(const Fixed &nbr) const;
	bool					operator<=(const Fixed &nbr) const;
	bool					operator==(const Fixed &nbr) const;
	bool					operator!=(const Fixed &nbr) const;

	static const Fixed&		min(const Fixed& a, const Fixed& b);
	static Fixed&			min(Fixed& a, Fixed& b);
	static const Fixed&		max(const Fixed& a, const Fixed& b);
	static Fixed&			max(Fixed& a, Fixed& b);
							Fixed&	operator = (const Fixed &to_copy);
							Fixed();
							Fixed(const Fixed &to_copy);
							Fixed(const int32_t val);
							Fixed(const float val);
							~Fixed();
};

std::ostream&	operator << (std::ostream& ostr, const Fixed& fixed);

#endif /* Fixed_H */
