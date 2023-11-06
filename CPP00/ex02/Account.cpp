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
#include <ctime> //time() localtime()
#include <iostream>//cin cout endl
#include <iomanip>//setw setfill

//why I move the 'static'?
//As long as you have the static keyword in the header file,
//the compiler knows it's a static class method,
//so you should not and cannot specify it in the definition in the source file.

//In C++ when you declare a static variable in the .h (or .hpp)
//you are creating a variable that is general (static) to the class.
//Thus, to use it in another file you have to redeclare it (which I'm guessing you didn't) to create a variable in that file referencing the static one

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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

void	_displayTimestamp(void)
{
	std::time_t	ret = std::time(NULL);
	std::cout<<'['<<std::localtime(&ret)->tm_year;

	std::cout<<']';

}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout<<"accounts:"<<getNbAccounts()<<";";
	std::cout<<"total:"<<getTotalAmount()<<";";
	std::cout<<"deposits:"<<getNbDeposits()<<";";
	std::cout<<"withdrawals:"<<getNbWithdrawals()<<std::endl;
}

int		checkAmount( void )const
{
	if (this->_amount < 0)
		return 1;
	return 0;
}

Account::Account(int initial_deposit )const
{
	this->_nbAccounts++;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 1;
	this->_nbWithdrawals = 0;
	this->_totalAmount = initial_deposit;
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";"<<"amount:"<<this->_amount<<";"<<"creatrd"<<std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<';';
	std::cout<<"amount:"<<getTotalAmount()<<';'<<"closed"<<std::endl;
}

void	makeDeposit( int deposit )
{
	_displayTimestamp();
	(void)deposit;
}


bool	makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	_displayTimestamp();
	if (checkAmount())
	{
		return false;
	}
	return true;
}


void	displayStatus( void )
{
	_displayTimestamp();
}
