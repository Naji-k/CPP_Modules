#pragma once
#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <string>

class Contact
{
public:
	void newContact(const std::string &fName, const std::string &lName,
					const std::string &nName, const std::string &pNumber,
					const std::string &dSecret);

	void getContact(void);
	std::string getName(void);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkSecret;
};

#endif