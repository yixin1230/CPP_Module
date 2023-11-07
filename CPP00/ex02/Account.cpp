/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 10:41:24 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/07 10:44:11 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime> //time() localtime()
#include <iostream>//cin cout endl

//why I move the 'static'?
//As long as you have the static keyword in the header file,
//the compiler knows it's a static class method,
//so you should not and cannot specify it in the definition in the source file.

//In C++ when you declare a static variable in the .h (or .hpp)
//you are creating a variable that is general (static) to the class.
//Thus, to use it in another file you have to redeclare it (which I'm guessing you didn't) to create a variable in that file referencing the static one

//Initialize static variables
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//Getter
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

//Constuctor
Account::Account(int initial_deposit )
{
	_nbAccounts++;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";"
		<<"amount:"<<this->_amount<<";"
		<<"created"<<std::endl;
}

//Destructor
Account::~Account(void)
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<';';
	std::cout<<"amount:"<<_amount<<';'<<"closed"<<std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	ret = std::time(NULL);
	std::cout<<'['<<std::localtime(&ret)->tm_year + 1900;
	if (localtime(&ret)->tm_mon + 1 < 10)
		std::cout<<"0";
	std::cout<<std::localtime(&ret)->tm_mon + 1;
	if (localtime(&ret)->tm_mday + 1 < 10)
		std::cout<<"0";
	std::cout<<std::localtime(&ret)->tm_mday;
	if (localtime(&ret)->tm_hour + 1 < 10)
		std::cout<<"0";
	std::cout<<"_"<<std::localtime(&ret)->tm_hour;
	if (localtime(&ret)->tm_min + 1 < 10)
		std::cout<<"0";
	std::cout<<std::localtime(&ret)->tm_min;
	if (localtime(&ret)->tm_sec + 1 < 10)
		std::cout<<"0";
	std::cout<<std::localtime(&ret)->tm_sec;
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

int	Account::checkAmount( void ) const
{
	if (_amount < 0)
		return 1;
	return 0;
}



void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"p_amount:"<<_amount<<";";
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits +=1;
	std::cout<<"deposit:"<<deposit<<";";
	std::cout<<"amount:"<<_amount<<";";
	std::cout<<"nb_deposits:"<<_nbDeposits<<std::endl;
}


bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"p_amount:"<<_amount<<";";
	this->_amount -= withdrawal;
	if (checkAmount())
	{
		this->_amount += withdrawal;
		std::cout<<"withdrawal:"<<"refused"<<std::endl;
		return false;
	}
	else
	{
		_totalAmount -= withdrawal;
		std::cout<<"withdrawal:"<<withdrawal<<";"
			<<"amount:"<<_amount<<";";
			_nbWithdrawals += 1;
		std::cout<<"nb_withdrawals:"<<_nbWithdrawals<<std::endl;
		return true;	
	}
}


void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"total:"<<_amount<<";";
	std::cout<<"deposits:"<<_nbDeposits<<";";
	std::cout<<"withdrawals:"<<_nbWithdrawals<<std::endl;
}
