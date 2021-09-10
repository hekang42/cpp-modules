#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{
}

Account::Account(int initial_deposit)
{
	_accountIndex = Account::_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created" << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
	<< ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
	int p_amount;

	p_amount = _amount;
	_amount += deposit;
	_displayTimestamp();
	++_totalNbDeposits;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << p_amount
	<< ";deposit:" << deposit
	<< ";amount:" << _amount
	<< ";nb_deposits:" << ++_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	int p_amount;

	p_amount = _amount;
	_amount -= withdrawal;
	_displayTimestamp();
	if (_amount >= 0)
	{
		std::cout << "index:" << _accountIndex
		<< ";p_amount:" << p_amount
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << _amount
		<< ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
		++_totalNbWithdrawals;
		_totalAmount -= withdrawal;
		return (true);
	}
	else
	{
		std::cout << "index:" << _accountIndex
		<< ";p_amount:" << p_amount
		<< ";withdrawal:refused" << std::endl;
		_amount = p_amount;
		return (false);
	}
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << _amount
	<< ";closed" << std::endl;
}

void Account::_displayTimestamp()
{
	time_t	temp;
	struct tm* timeinfo;

	time(&temp);
	timeinfo = localtime(&temp);
	std::cout << std::setfill('0') << "["
	<< 1900 + timeinfo->tm_year
	<< std::setw(2) << 1 + timeinfo->tm_mon
	<< std::setw(2) << timeinfo->tm_mday
	<< "_" 
	<< std::setw(2) << timeinfo->tm_hour
	<< std::setw(2) << timeinfo->tm_min
	<< std::setw(2) << timeinfo->tm_sec
	<< "] ";
}


