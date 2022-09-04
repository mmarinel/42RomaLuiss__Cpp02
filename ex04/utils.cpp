/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:46:52 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/21 11:50:45 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"

size_t	str_last_occurrence(std::string str, char to_find)
{
	size_t	pos;
	size_t	new_pos;

	pos = std::string::npos;
	while (true)
	{
		new_pos = str.find(to_find, pos == std::string::npos ? 0 : pos + 1);
		if (new_pos == std::string::npos)
			break ;
		else
			pos = new_pos;
	}
	return (pos);
}

bool	find_success(size_t index)
{
	return (index != std::string::npos);
}
