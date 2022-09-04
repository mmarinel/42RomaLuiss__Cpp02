/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:39:06 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/02 18:41:13 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"

static void	substitute_all(std::string to_find, std::string replacement,
				std::ifstream &myFile, std::ofstream &output);
static void replace_line(std::string &buffer,
				std::string to_find, std::string replacement,
				std::ofstream &output);
static void	shift_buffer(std::string &buffer, std::string to_find,
				std::ofstream &output);
//* end of static declarations

/**
 * @brief this function returns true iff the sed operation could be performed without any errors.
 * 
 * @param filename 
 * @param to_find 
 * @param replacement 
 * @return true 
 * @return false 
 */
bool	my_sed(std::string filename, std::string to_find, std::string replacement)
{
	std::ifstream	myFile (filename);
	std::ofstream	output (std::string(filename) + std::string(".replace"));

	if (false == myFile.is_open() || false == output.is_open())
	{
		std::cout << BOLDRED << "Error: could not open file" << RESET << std::endl;
		return (false);
	}
	else
	{
		substitute_all(to_find, replacement, myFile, output);
		if (myFile.bad() || output.bad())
		{
			std::cout << BOLDRED << "Error: file corrupted during I/O operation" << std::endl;
			return (false);
		}
		else
			return (true);
	}
}

static void	substitute_all(std::string to_find, std::string replacement,
				std::ifstream &myFile, std::ofstream &output)
{
	std::string	buffer;
	char		*line;
	
	buffer = std::string("");
	while (myFile.good() && output.good())
	{
		line = new char[to_find.length()];
		memset(line, '\000', to_find.length());
		myFile.read(line, to_find.length() - buffer.length());
		buffer += line;
		if (myFile.good())
		{
			replace_line(buffer, to_find, replacement, output);
		}
		else
		{
			output << line;
		}
		delete[] line;
	}
}

static void replace_line(std::string &buffer,
				std::string to_find, std::string replacement,
				std::ofstream &output)
{
	size_t	pos;

	pos = buffer.find(to_find);
	if (find_success(pos))
	{
		output << replacement;
		buffer.erase(0);
	}
	else
	{
		shift_buffer(buffer, to_find, output);
	}
}

static void	shift_buffer(std::string &buffer, std::string to_find,
				std::ofstream &output)
{
	size_t		pos;

	pos = str_last_occurrence(buffer, to_find[0]);
	if (find_success(pos)
		&& buffer.length() - pos < to_find.length())
	{
		output << buffer.substr(0, pos);
		buffer = buffer.substr(pos);
	}
	else
	{
		output << buffer;
		buffer.erase(0);
	}
}
