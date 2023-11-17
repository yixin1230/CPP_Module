/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 15:19:06 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 15:35:12 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout<<_name<<" attacks with their "<<_Weapon.getType()<<std::endl;
}
