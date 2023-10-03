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
#include <iostream>

//why I move the 'static'?
//As long as you have the static keyword in the header file,
//the compiler knows it's a static class method,
//so you should not and cannot specify it in the definition in the source file.
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

void	Account::displayAccountsInfos( void )
{
		std::cout<<"index:"<<i<<';';
		std::cout<<"amount:"<<getTotalAmount()<<';';
		std::cout<<"deposits:"<<getNbDeposits()<<';';
		std::cout<<"withdrawals:"<<getNbWithdrawals()<<';';
}

Account::Account( int initial_deposit )
{
	
}

Account::~Account( void )
{
	
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
	return ();
}

void	displayStatus( void ) const
{
	
}
