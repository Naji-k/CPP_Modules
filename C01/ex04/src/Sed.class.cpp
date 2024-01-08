/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.class.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 16:50:37 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/11 16:50:37 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.class.hpp"
#include <fstream>
#include <iostream>

Sed::Sed()
{
}
Sed::Sed(const std::string &infile)
	: _ifName(infile)
{
	this->_ofName = this->_ifName + ".replace";
}
Sed::~Sed()
{
}

void Sed::replace(const std::string &toFind, const std::string &toReplace)
{
	std::ifstream ifs;
	ifs.open(_ifName.c_str());
	if (ifs.fail())
	{
		std::cout << "Unable to open infile" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string wholeContent;
	std::getline(ifs, wholeContent, '\0');
	if (wholeContent.empty())
	{
		std::cout << "The infile is empty" << std::endl;
		exit(EXIT_SUCCESS);
	}
	size_t pos = wholeContent.find(toFind);
	while (pos != std::string::npos)
	{
		wholeContent = wholeContent.substr(0, pos) + toReplace
			+ wholeContent.substr(pos + toFind.length());
		pos = wholeContent.find(toFind, pos + toReplace.length());
	}
	std::ofstream ofs;
	ofs.open(_ofName.c_str());
	if (ofs.is_open())
	{
		ofs << wholeContent;
		ofs.close();
	}
	else
	{
		std::cout << "Unable to open .replace file" << std::endl;
	}
	ifs.close();
}