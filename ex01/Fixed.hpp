/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:37:42 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/04 15:45:07 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

# include "../colors.hpp"
# include "utils.hpp"
# include <iostream>

# include <cmath>

# define MAX_DIGITS_INT 10

class Fixed
{
private:
	int					val;
	static const int	_frac_bits = 8;
public:
	float	toFloat( void ) const;
	int		toInt( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
			Fixed();
			Fixed(const Fixed &to_copy);
			Fixed(const int val);
			Fixed(const float val);
			Fixed&	operator = (const Fixed &to_copy);
			~Fixed();
};

std::ostream&	operator << (std::ostream& ostr, const Fixed& fixed);

#endif /* Fixed_H */
