/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/29 14:05:57 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/29 17:32:39 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "NAME";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage= 20;
	std::cout<< YELLOW <<_name<<": default ScavTrap constructor called"<<RESET<<std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage= 20;
	std::cout<< YELLOW <<_name<<": ScavTrap constructor called"<<RESET<<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout<< BLUE <<_name<<": ScavTrap destructor called"<<RESET<<std::endl;
}

void  ScavTrap::guardGate()
{
	if (_hitPoints == 0 || _attackDamage == 0)
	{
		dead();
		return ;
	}
	std::cout<<_name<<":  ScavTrap is now in Gatekeeper mode"<<std::endl;
}
