/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 15:18:42 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 18:03:53 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string type)
{
	_type = type;
}

std::string	Weapon::getType(void)
{
	return _type;
}

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::Weapon()
{

}

Weapon::~Weapon()
{
	std::cout<<"\033[1;31m"<<_type<<" : weapon cleaned"<<"\033[0m"<<std::endl;
}
