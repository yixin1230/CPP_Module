/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 16:18:01 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 10:12:44 by yizhang       ########   odam.nl         */
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

Dog &Dog::operator=(Dog const &a)
{
	_type = a._type;
	_brain = a._brain;
	std::cout<<"Dog copy assigment operator called"<<std::endl;
	return (*this);
}