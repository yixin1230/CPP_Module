/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 16:00:08 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/02 16:14:20 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "TYPE";
	std::cout<<" Animal constructor called"<<std::endl;
}

Animal::~Animal()
{
	std::cout<<" Animal destructor called"<<std::endl;
}

void Animal::makeSound(void)
{
	std::cout<<"Some sound"<<std::endl;
}
