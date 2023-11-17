/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 15:19:02 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 18:03:57 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout<<_name<<" attacks with their "<<_Weapon->getType()<<std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_Weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
	std::cout<<"\033[1;31m"<<_name<<" cleaned"<<"\033[0m"<<std::endl;
}
