/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 19:46:17 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/29 17:32:21 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::dead()
{
	std::cout<<RED <<_name<<" DEAD! Can't do anything. No hit points or energy points" RESET<<std::endl;
	_energyPoints = 0;
	_hitPoints = 0;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0 || _energyPoints <= 1)
	{
		dead();
		return ;
	}
	std::cout<<_name<< " attacks "<<target<<" causing "<<_attackDamage<<" points of damage!"<<std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0 || _energyPoints <= 1)
	{
		dead();
		return ;
	}
	std::cout<<_name<<" be repaired "<<amount<<" points"<<std::endl;
	_hitPoints += amount;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount || _energyPoints == 0)
	{
		dead();
		return ;
	}
	_hitPoints -= amount;
	std::cout<<_name<<" take Damage "<<amount<<" points"<<std::endl;
}

ClapTrap::ClapTrap()
{
	_name = "NAME";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout <<  GREEN <<_name <<": default constructor called" RESET<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout  <<  GREEN <<_name << ": constructor called" RESET<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap &a)
{
	*this = a;
	std::cout <<  GREEN <<_name<<": copy constructor called" RESET<<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout<<MAG  << _name <<": default destructor called" RESET<<std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &a)
{
	this->_name = a._name;
	this->_hitPoints = a._hitPoints;
	this->_attackDamage = a._attackDamage;
	this->_energyPoints = a._energyPoints;
	return (*this);
}
