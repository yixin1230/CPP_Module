/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 14:39:31 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/02 15:24:00 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout<<YELLOW<<_name<<": FragTrap destructor called"<<RESET<<std::endl;
}

FragTrap::FragTrap()
{
	_name = "NAME";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout<<BLUE<<_name<<": default FragTrap constructor called"<<RESET<<std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout<<BLUE<<_name<<": FragTrap constructor called"<<RESET<<std::endl;
	
}

void FragTrap::highFiveGuys(void)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		dead();
		return ;
	}
	std::cout<<_name<<" Positive high five "<<std::endl;
}
