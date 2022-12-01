/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:56:42 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/01 21:53:00 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit)
{
   _accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
	_nbDeposits = _totalNbDeposits;
	_nbDeposits++;
   _nbAccounts++;
};

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _totalAmount;
	std::cout << ";closed" << std::endl;
} ;

void Account::_displayTimestamp( void )
{
	time_t	now = time(0);
	tm 	*gettime = localtime(&now);
	std::cout << "[";
	std::cout << 1900 + gettime->tm_year;
	std::cout << 1 + gettime->tm_mon;
	std::cout << gettime->tm_mday;
	std::cout << '_';
	std::cout << 5 + gettime->tm_hour;
	std::cout << 30 + gettime->tm_min;
	std::cout << gettime->tm_sec;
	std::cout << "] ";
}

int  Account::getNbAccounts( void ) { return (_nbAccounts); }

int Account::getTotalAmount( void ) { return (_totalAmount); }

int Account::getNbDeposits( void ) { return (_totalNbDeposits); }

int Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void    Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	_amount += deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits << std::endl;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits += _nbDeposits;
}

bool    Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > _totalAmount)
	{
		std::cout << "Not Enough Funds" << std::endl;
		return (false);
	}
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals = _nbWithdrawals;
	return (true);
}

int     Account::checkAmount( void ) const { return (_amount); }

void    Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
