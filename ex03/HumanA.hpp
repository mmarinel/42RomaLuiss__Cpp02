/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:35:41 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/20 14:55:10 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

# include "Weapon.hpp"
# include <string>

class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;
public:
	void	attack( void );
			HumanA( const char *name, Weapon &weapon );
			~HumanA();
};


#endif /* HUMANA_H */
