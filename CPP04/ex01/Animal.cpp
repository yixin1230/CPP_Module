/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 16:00:08 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/02 20:41:57 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "TYPE";
	std::cout<<GREEN<<"Animal constructor called"<<RESET<<std::endl;
}

Animal::~Animal()
{
	std::cout<<GREEN<<"Animal destructor called"<<RESET<<std::endl;
}

void Animal::makeSound(void) const
{
	std::cout<<"Some sound"<<std::endl;
}

std::string Animal::getType(void) const
{
	return (_type);
}

Animal &Animal::operator=(Animal const &a)const
{
	this->_type = a._type;
	return (*this);
}

