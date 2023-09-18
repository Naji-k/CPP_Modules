#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>

class Contact
{
  public:
	void newContact(const std::string &fName, const std::string &lName,
			const std::string &nName, const std::string &pNumber,
			const std::string &dSecret);

	void getContact(void);

  private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkSecret;
};

#endif