/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/27 18:49:02 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/09/27 18:49:02 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_nbAccounts += 1;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts - 1;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

void Account::_displayTimestamp(void)
{
	char buffer[80];

	std::time_t now = std::time(0);
	std::tm *ltm = std::localtime(&now);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", ltm);
	std::string formattedTime(buffer);
	std::cout << "[" << formattedTime << "] ";
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

// makeDeposits
void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	// index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	int p_amount = _amount;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	_totalNbDeposits += 1;
	_totalAmount += deposit;

	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

// makeWithdrawal
bool Account::makeWithdrawal(int withdrawal)
{
	int p_amount = _amount;
	if (withdrawal > _amount)
	{
		//	p_amount = -1;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:"
				  << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	_totalAmount -= withdrawal;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:"
			  << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
