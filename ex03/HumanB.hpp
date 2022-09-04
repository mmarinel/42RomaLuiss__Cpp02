/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:35:53 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/20 14:57:39 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

# include "Weapon.hpp"
# include <string>

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	void	attack( void );
	void	setWeapon( Weapon &weapon );
			HumanB( const char *name );
			~HumanB();
};


#endif /* HUMANB_H */
