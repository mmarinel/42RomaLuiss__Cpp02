/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:36:02 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/03 12:05:25 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
#include <string>
#include "../colors.hpp"

void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA( const char *name, Weapon &weapon ) : weapon(weapon)
{
	if (name)
		this->name = std::string(name);
	else
		this->name = std::string("");
}

HumanA::~HumanA()
{
	std::cout << RED << "a HumanA" << " is destroyed" << RESET << std::endl;
}
