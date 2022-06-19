#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

// Private Account Static variables 
int Account::_nbAccounts = 0;			// Total number of accounts
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor without parameter
Account::Account(void)
{
	_accountIndex = _nbAccounts++;		// Account index is equal to total number of accounts incremented by 1
	_amount = 0;						// The account is created with any deposit
	_nbDeposits = 0;					// Number of deposits made
	_nbWithdrawals = 0;					// Number of withrawals done

	_displayTimestamp();
}

// Constructor with parameter
Account::Account(int initial_deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";" << "amount:" << _amount << ";created" << std::endl;

	_accountIndex = _nbAccounts++;		// Account index is equal to total number of accounts incremented by 1
	_amount = initial_deposit;			// The account is created with a initial deposit
	_nbDeposits = 0;					// Number of deposits made
	_nbWithdrawals = 0;					// Number of withrawals done
	_totalAmount += _amount;
}

// Destructor
Account::~Account(void)					// destructor
{
	;
}

void	Account::displayAccountsInfos()
{
	//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";" << "total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits << ";withrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int)
{
	_displayTimestamp();
}

bool	Account::makeWithdrawal(int)
{
	return (0);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
}

void	Account::_displayTimestamp( void )
{
	time_t now = time (0);

	tm *time = localtime(&now);

	std::cout << "[" << 1900 + time->tm_year; //Time passed since 1900...
	std::cout << std::setfill('0') << std::setw(2) << 1 + time->tm_mon;
	std::cout << time->tm_mday;
	std::cout << "_" << std::setfill('0') << std::setw(2) << time->tm_hour
	<< std::setfill('0') << std::setw(2) << time->tm_min 
	<< std::setfill('0') << std::setw(2) << time->tm_sec << "] ";
}