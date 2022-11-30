/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:56:42 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/30 20:53:19 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
};

Account::~Account( void ) {} ;

int  Account::getNbAccounts( void )
{
    return (1);
}

int Account::getTotalAmount( void )
{
    return (1);
    
}

int Account::getNbDeposits( void )
{
    return (1);
    
}

int Account::getNbWithdrawals( void )
{
    return (1);
    
}

void    Account::displayAccountsInfos( void )
{
        
}

void    Account::makeDeposit( int deposit )
{

}

bool    Account::makeWithdrawal( int withdrawal )
{
    return (true);    
}

int     Account::checkAmount( void ) const
{
    return (1);
    
}

void    Account::displayStatus( void ) const
{
    
}

static void _displayTimestamp( void )
{
    
}