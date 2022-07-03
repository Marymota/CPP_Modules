/* Recreation of class arguments and methods based on class declaration and program output*/

#include "../inc/Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

// Private Account Static variables 
int Account::_nbAccounts = 0;					// Total number of accounts
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor without parameter
Account::Account(void)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts++;		// Account index is equal to total number of accounts incremented by 1
	_amount = 0;											// The account is created with any deposit
	_nbDeposits = 0;									// Number of deposits made
	_nbWithdrawals = 0;								// Number of withrawals done
}

// Constructor with parameter
Account::Account(int initial_deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";" << "amount:" << initial_deposit << ";created" << std::endl;

	_accountIndex = _nbAccounts++;		// Account index is equal to total number of accounts incremented by 1
	_amount += initial_deposit;				// The account is created with a initial deposit
	_nbDeposits = 0;									// Number of deposits made
	_nbWithdrawals = 0;								// Number of withrawals done
	_totalAmount += _amount;			
}

//	Destructor
Account::~Account(void)							// closes accounts
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

//	Prints Info of all accounts
void	Account::displayAccountsInfos() 
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits << ";withrawals:" << _totalNbWithdrawals << std::endl;
}

//	Deposits money into an account incrementing the total amount and total number of deposits
void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
	<< ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << ++_nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

// Withdraws money from accounts decreasing the total amount and increasing the total number of withdrals 
bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal <= _amount)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal 
		<< ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
	}
	else
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";withdrawal:refused" << std::endl;
	}
	return (withdrawal);
}

// Display info from an account
void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";deposits:" << _nbDeposits << ";withrawals:" << _nbWithdrawals << std::endl;
}

// Display current time and date
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