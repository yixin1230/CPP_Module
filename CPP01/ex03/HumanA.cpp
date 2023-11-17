/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 15:19:06 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 17:59:20 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout<<_name<<" attacks with their "<<_Weapon->getType()<<std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	_name = name;
	_Weapon = &weapon;
}

HumanA::~HumanA()
{
	std::cout<<"\033[1;31m"<<_name<<" cleaned"<<"\033[0m"<<std::endl;
}
