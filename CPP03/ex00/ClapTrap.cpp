/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 19:46:17 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/29 11:23:14 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target)
{
	std::cout<<"ClapTrap "<< 
	_name<< "attacks "<< 
	target <<" causing "<<
	_attackDamage<<" points of damage!"<<std::endl;
	//howt to let target lose 1 attackDamage
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<<_name<<"take Damage"<<amount<<"points"<<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout<<_name<<"be repaired"<<amount<<"points"<<std::endl;
}

ClapTrap::ClapTrap()
{
	_name = "default";
	_hitPoints = 10;
	_EnergyPoints = 10;
	_attackDamage = 0;
	std::cout << _name << ": default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_EnergyPoints = 10;
	_attackDamage = 0;
	std::cout << _name << ": constructor called"<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap &a)
{
	*this = a;
	std::cout<<_name<<": copy constructor called"<<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << ": default destructor called"<<std::endl;
}


ClapTrap &ClapTrap::operator=(ClapTrap const &a)
{
	this->_name = a._name;
	this->_hitPoints = a._hitPoints;
	this->_attackDamage = a._attackDamage;
	this->_EnergyPoints = a._EnergyPoints;
	return (*this);
}
