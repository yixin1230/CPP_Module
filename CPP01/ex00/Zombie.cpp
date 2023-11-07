/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/07 17:30:43 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/07 18:02:01 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout<<"Zombie "<<getname()<<" created"<<std::endl;
}

Zombie::~Zombie(void)
{
    std::cout<<"Zombie "<<getname()<<" destroyed"<<std::endl;
}

std::string	Zombie::getname(void)
{
    return _name;
}

void Zombie::announce(void)
{
    std::cout<<getname()<<":BraiiiiiiinnnzzzZ..."<<std::endl;
}