/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 16:18:01 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/02 20:30:10 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout<<YELLOW<<_type<<" constructor called "<<RESET<<std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout<<YELLOW<<_type<<" destructor called "<<RESET<<std::endl;
}

void Dog::makeSound()const
{
	std::cout<<_type<<": Woof Woof!"<<std::endl;
}
