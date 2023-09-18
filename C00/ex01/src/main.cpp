#include "PhoneBook.class.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook book1;
	
	book1.add("naji" , "knounji", "nino" ,"123123" ,"hey");
	book1.add("hello" , "hey", "nino" ,"444222" ,"hey");
	book1.displayPhoneBook();
	return (0);
};