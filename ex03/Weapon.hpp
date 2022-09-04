/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:24:55 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/20 14:41:52 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
private:
	std::string	type;
public:
	std::string const	&getType( void );
	void				setType( const char *type_new );
	Weapon( std::string type );
	Weapon();
	~Weapon();
};


#endif /* WEAPON_H */
