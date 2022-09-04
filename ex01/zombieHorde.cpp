/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   horde.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:07:58 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/20 10:31:01 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie	*horde;
	
	if (N == 0)
		return (nullptr);
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
