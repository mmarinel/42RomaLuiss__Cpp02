/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:38:38 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/20 14:58:43 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string>
#include "../colors.hpp"

void	HumanB::attack( void )
{
	if (nullptr != this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon!" << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
}

HumanB::HumanB( const char * name)
{
	if (name)
		this->name = std::string(name);
	else
		this->name = std::string("");
	this->weapon = nullptr;
}

HumanB::~HumanB()
{
	std::cout << RED << "a HumanB" << " is destroyed" << RESET << std::endl;
}
