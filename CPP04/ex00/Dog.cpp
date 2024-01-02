/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 16:18:01 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/02 17:06:46 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout<<YELLOW<<_type<<" constructor called "<<RESET<<std::endl;
}

Dog::~Dog()
{
	std::cout<<YELLOW<<_type<<" destructor called "<<RESET<<std::endl;
	
}

void Dog::makeSound()const
{
	std::cout<<_type<<": Woof Woof!"<<std::endl;
}
