/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:28:29 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/20 15:01:55 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include "../colors.hpp"

std::string const	&Weapon::getType( void )
{
	std::string const	&ref_type = this->type;

	return (ref_type);
}

void	Weapon::setType( const char *type_new )
{
	if (!type_new || !type_new[0])
		return ;
	this->type = std::string(type_new);
}

Weapon::Weapon ( std::string type )
{
	this->type.assign(type);
}

Weapon::Weapon ( void )
{
	this->type = "Nameless Weapon";
}

Weapon::~Weapon()
{
	std::cout << RED << "a " << this->type << " is destroyed" << RESET << std::endl;
}
