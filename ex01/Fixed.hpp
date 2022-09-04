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

# define MAX_DIGITS_INT 10

class Fixed
{
private:
	int					val;
	static const int	_frac_prt = 8;
public:
	float	toFloat( void ) const;
	int		getRawBits( void );
	void	setRawBits( int const raw );
			Fixed();
			Fixed(Fixed &to_copy);
			Fixed(const int val);
			Fixed(const float val);
			Fixed&	operator = (Fixed &to_copy);
			~Fixed();
};

#endif /* Fixed_H */
