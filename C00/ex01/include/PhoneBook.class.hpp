#include "Contact.class.hpp"

class PhoneBook
{
  public:
	PhoneBook() : index(0) {};
	void add(const std::string &fname, const std::string &fName, const std::string &nName,
			const std::string &pNumber, const std::string &dSecret);
	void search();
	void exit();
	void displayPhoneBook();

  private:
	static const int MaxContactNumber = 8;
	int index;
	Contact contacts[MaxContactNumber];
};