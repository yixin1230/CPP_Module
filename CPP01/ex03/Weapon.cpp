/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 15:18:42 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 15:23:50 by yizhang       ########   odam.nl         */
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
