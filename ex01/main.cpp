/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:26:50 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/20 10:32:04 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"
#include "../colors.hpp"
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	unsigned int	N;
	std::string		name;
	Zombie			*horde;

	if (argc == 3)
	{
		N = std::atoi(argv[1]);
		name = std::string(argv[2]);
		horde = zombieHorde(N, name);

		//* printing objects //
		for (unsigned int i = 0; i < N; i++)
		{
			std::cout << "zombie n^" << i << " ";
			horde[i].announce();
		}

		//* deleting objects //
		if (N != 0)
			delete[] horde;
	}
	else
	{
		std::cout << "No brainzz (SAD)" << std::endl;
	}
	std::cout << GREEN "END" RESET << std::endl << std::endl;
	return 0;
}
