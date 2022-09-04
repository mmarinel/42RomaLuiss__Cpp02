/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:49:17 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/02 17:15:04 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc == 4)
	{
		my_sed(std::string(argv[1]), std::string(argv[2]), std::string(argv[3]));
		std::cout << "Test: " << GREEN << "<<file written>>" << RESET << " (look at " <<  argv[1] << ".replace)" << std::endl;
	}
	else
	{
		std::cout << "Test: " << BOLDRED << "Error: Wrong number of arguments" << RESET << std::endl;
	}
	return 0;
}
