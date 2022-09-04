/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 19:52:03 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/03 11:44:14 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "../colors.hpp"
#include <iostream>

void	Zombie::announce( void )
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name)
{
	this->name.assign(name);
}

Zombie::Zombie( std::string name )
{
	this->name.assign(name);
}

Zombie::Zombie()
{
	this->name = std::string();
}

Zombie::~Zombie()
{
	std::cout << this->name << ": " << RED "killed" RESET << std::endl;
}
