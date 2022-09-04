/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:36:44 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/21 10:47:32 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX04_H
#define EX04_H

#include "../colors.hpp"
#include <string>
#include <iostream>
#include <fstream>

bool	my_sed(std::string filename, std::string to_find, std::string replacement);

//* utils
size_t	str_last_occurrence(std::string str, char to_find);
bool	find_success(size_t index);

#endif /* EX04_H */
