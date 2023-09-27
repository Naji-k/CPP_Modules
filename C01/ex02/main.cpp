/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/27 20:58:00 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/09/27 20:58:00 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "<<===MEMORY ADDRESSES===>>" << std::endl;
	std::cout << "the string variable:\t" << &str << std::endl;
	std::cout << "the stringPTR:\t" << stringPTR << std::endl;
	std::cout << "the stringREF:\t" << &stringREF << std::endl;

	std::cout << "<<===VALUE OF STRING===>>" << std::endl;
	std::cout << "the string variable:\t" << str << std::endl;
	std::cout << "the stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "the stringREF:\t" << stringREF << std::endl;
}