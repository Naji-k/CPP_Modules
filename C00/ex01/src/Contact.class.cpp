/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/27 18:16:23 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/09/27 18:16:23 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

void Contact::newContact(const std::string &fName, const std::string &lName,
						 const std::string &nName, const std::string &pNumber, const std::string &dSecret)
{
	this->_firstName = fName;
	this->_lastName = lName;
	this->_nickName = nName;
	this->_phoneNumber = pNumber;
	this->_darkSecret = dSecret;
};
void Contact::getContact()
{
	std::cout << "First Name: " << _firstName << " ";
	std::cout << "Last Name: " << _lastName << " ";
	std::cout << "Nick Name: " << _nickName << " ";
	std::cout << "Phone Number: " << _phoneNumber << " ";
	std::cout << "Dark Secret: " << _darkSecret << std::endl;
};

std::string Contact::getName()
{
	return (_firstName);
}

std::string Contact::getFirstName()
{
	return (_firstName);
}

std::string Contact::getLastName()
{
	return (_lastName);
}
std::string Contact::getNickName()
{
	return (_nickName);
}
std::string Contact::getPhoneNumber()
{
	return (_phoneNumber);
}