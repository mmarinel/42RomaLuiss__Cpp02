/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earendil <earendil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:56:50 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/22 18:23:54 by earendil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

const Harl::t_harl_method	Harl::fpt_array[FPT_ARR_SIZE + 1] = {
	{"DEBUG", &Harl::debug},
	{"INFO", &Harl::info},
	{"WARNING", &Harl::warning},
	{"ERROR", &Harl::error},
	{"", &Harl::no_op}
};

size_t	Harl::lvl_rank( std::string level )
{
	return (fpt_arr_index_of(level));
}

void	Harl::complain( std::string level )
{
	(this->*(fpt_array[fpt_arr_index_of(level)].fp))();
}

size_t	Harl::fpt_arr_index_of( std::string level )
{
	for (int i = 0; i < FPT_ARR_SIZE; i++)
		if (0 == level.compare(fpt_array[i].name))
			return (i);
	return (FPT_ARR_SIZE);
}

void	Harl::debug( void )
{
	std::cout << YELLOW << "Harl debug: " << RESET
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << GREEN << "Harl info: " << RESET
		<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << BOLDMAGENTA << "Harl warning: " << RESET
		<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << RED << "Harl error: " << RESET
		<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::no_op( void )
{
	//* Intentionally left blank
}

Harl::Harl()
{
	//* Intentionally left blank
}

Harl::~Harl()
{
	//* Intentionally left blank
}
