/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 11:11:57 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/08 11:12:43 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout<<"Zombie "<<_name<<" created"<<std::endl;
}

Zombie::~Zombie(void)
{
    std::cout<<"Zombie "<<_name<<" destroyed"<<std::endl;
}

void Zombie::announce(void)
{
    std::cout<<_name<<":BraiiiiiiinnnzzzZ..."<<std::endl;
}