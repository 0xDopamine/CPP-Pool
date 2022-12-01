/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:56:42 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/01 20:30:25 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit)
{
   _accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += _amount;
	std::cout << "[";
	_displayTimestamp();
	std::cout << "] ";
	std::cout << "index: " << _accountIndex;
	std::cout << ";amount: " << _amount;
	std::cout << ";created" << std::endl;
	_nbDeposits = _totalNbDeposits;
	_nbDeposits++;
   _nbAccounts++;
};

Account::~Account( void )
{
	std::cout << "[";
	_displayTimestamp();
	std::cout << "] ";
	std::cout << "index: " << _accountIndex;
	std::cout << ";amount: " << _totalAmount;
	std::cout << ";closed" << std::endl;
} ;

int  Account::getNbAccounts( void ) { return (_nbAccounts); }

int Account::getTotalAmount( void ) { return (_totalAmount); }

int Account::getNbDeposits( void ) { return (_totalNbDeposits); }

int Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void    Account::displayAccountsInfos( void )
{
		
}

void    Account::makeDeposit( int deposit )
{
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits = _nbDeposits;
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
	std::cout << "[";
	_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _totalAmount;
	std::cout << ";deposists:" << _totalNbDeposits;
	std::cout << ";withdrawals: " << _totalNbWithdrawals;
}

static void _displayTimestamp( void )
{
	
}