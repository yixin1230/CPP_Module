/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 19:46:17 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/28 20:05:11 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target)
{
	std::cout<<"ClapTrap "<< 
	_name<< "attacks "<< 
	target <<" causing "<<
	_attackDamage<<" points of damage!"<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	
}


ClapTrap::ClapTrap()
{
	std::cout << _name << ": default constructor"<<std::endl;
}

ClapTrap::ClapTrap(std::string)
{
	std::cout << _name << ": constructor"<<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << ": default destructorr"<<std::endl;
}
