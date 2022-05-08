// ********************************************************************** //
//                                                                        //
//             Account.cpp                                                //
//             Created: 2022/05/01 00:57:35 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void){return _nbAccounts;}

int	Account::getTotalAmount(void){return _totalAmount;}

int	Account::getNbDeposits(void){return _totalNbDeposits;}

int	Account::getNbWithdrawals(void){return _totalNbWithdrawals;}

int Account::checkAmount(void) const {return this->_amount;}

void	Account::_displayTimestamp( void ){
	time_t	now = time(0);
	tm		*ltm = localtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year;
	if (ltm->tm_mon < 9)
		std::cout << "0";
  	std::cout << 1 + ltm->tm_mon;
	if (ltm->tm_mday < 10)
		std::cout << "0";
	std::cout << ltm->tm_mday << "_";
	if (ltm->tm_hour < 10)
		std::cout << "0";
   	std::cout << ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << "0";
   	std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << "0";   
   	std::cout << ltm->tm_sec << "] ";
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";" << "total:"
	<< _totalAmount << ";" << "deposits:"<< _totalNbDeposits << ";"
	<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
	<< "amount:"<< this->_amount << ";" << "created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
	<< "amount:" << this->_amount << ";" << "closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount;

	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
	<< "p_amount:" << p_amount << ";" << "deposit:"
	<< deposit << ";" << "amount:" << this->_amount << ";"
	<< "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
	<< "p_amount:" << this->_amount << ";";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:" << "refused" << std::endl;
		return (false);
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << "amount:" << this->_amount << ";"
	<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
	<< "amount:" << this->_amount << ";"  << this->_nbDeposits << ";"
	<< "deposits:"<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}
