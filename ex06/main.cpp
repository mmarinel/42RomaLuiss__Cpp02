/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earendil <earendil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:45:22 by earendil          #+#    #+#             */
/*   Updated: 2022/08/22 18:31:39 by earendil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	if (argc == 2)
	{
		size_t		lvl;
		Harl		harl;

		lvl = Harl::lvl_rank(argv[1]);
		switch (lvl)
		{
		case 0:
			std::cout << "[ " << YELLOW << "DEBUG" << RESET << " ]" << std::endl;
			harl.complain("DEBUG");
		case 1:
			std::cout << "[ " << GREEN << "INFO" << RESET << " ]" << std::endl;
			harl.complain("INFO");
		case 2:
			std::cout << "[ " << BOLDMAGENTA << "WARNING" << RESET << " ]" << std::endl;
			harl.complain("WARNING");
		case 3:
			std::cout << "[ " << RED << "ERROR" << RESET << " ]" << std::endl;
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
		return (0);
	}
	else
		return (1);
}
