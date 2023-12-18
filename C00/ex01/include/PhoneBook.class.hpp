/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/27 18:16:19 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/09/27 18:16:19 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include <string>

class PhoneBook
{
public:
	PhoneBook() : _index(0){};
	void add(const std::string &fname, const std::string &lName, const std::string &nName,
			 const std::string &pNumber, const std::string &dSecret);
	void displayPhoneBook();
	int	 checkInputs(PhoneBook &book);
	void find(int max);
	void printLine(int i);

private:
	static const int _MaxContactNumber = 8;
	int _index;
	Contact contacts[_MaxContactNumber];
};

#endif