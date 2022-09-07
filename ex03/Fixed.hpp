/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:06:17 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/07 10:55:20 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

# include "../colors.hpp"
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
	const Fixed				abs( void ) const;
	static void				insSort(Fixed nbrs[], size_t len);
	static const Fixed		machine_epsilon( void );
	static const Fixed		tolerance( void );

	Fixed&					operator = (const Fixed &to_copy);

	//* arithmetic
	const Fixed					operator-( void ) const;//* NEGATION
	const Fixed					operator+(const Fixed &nbr) const;
	const Fixed					operator-(const Fixed &nbr) const;
	const Fixed					operator*(const Fixed &nbr) const;
	const Fixed					operator/(const Fixed &nbr) const;
	const Fixed&				operator<<(const int32_t bits);
	const Fixed&				operator>>(const int32_t bits);

	//* increment and decrement
	Fixed&						operator++();//* pre-fix
	const Fixed					operator++(int32_t nbr);//* post-fix -----nbr is used as discriminator
	Fixed&						operator--();
	const Fixed					operator--(int32_t nbr);

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
							Fixed();
							Fixed(const Fixed &to_copy);
							Fixed(const int32_t val);
							Fixed(const float val);
							~Fixed();
};

std::ostream&	operator << (std::ostream& ostr, const Fixed& fixed);

#endif /* Fixed_H */
