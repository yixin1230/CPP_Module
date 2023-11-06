/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 10:41:24 by yizhang       #+#    #+#                 */
/*   Updated: 2023/10/03 18:07:30 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime> //c++ date and time
#include <iostream>

//why I move the 'static'?
//As long as you have the static keyword in the header file,
//the compiler knows it's a static class method,
//so you should not and cannot specify it in the definition in the source file.

void	_displayTimestamp( void )
{
	std::time_t	ret = std::time(NULL);
}

void	Account::displayAccountsInfos( void )
{
	std::cout<<"index:"<<i<<';';
	std::cout<<"amount:"<<getTotalAmount()<<';';
	std::cout<<"deposits:"<<getNbDeposits()<<';';
	std::cout<<"withdrawals:"<<getNbWithdrawals()<<';';
}

Account::Account( int initial_deposit )
{
	//time
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalNbDeposits = initial_deposit;
	Account::displayAccountsInfos();
}

Account::~Account( void )
{
	//time
	std::cout<<"index:"<<i<<';';
	std::cout<<"amount:"<<getTotalAmount()<<';'<<"closed"<<std::endl;
}

void	makeDeposit( int deposit )
{
	
}

bool	makeWithdrawal( int withdrawal )
{
	if ()
	{
		
	}
	else
		return ();
}

int		checkAmount( void ) const
{
	return (_amount);
}

void	displayStatus( void ) const
{
	
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}