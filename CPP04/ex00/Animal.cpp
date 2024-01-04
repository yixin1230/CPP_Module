/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 16:00:08 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 09:54:59 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout<<GREEN<<"Animal constructor called"<<RESET<<std::endl;
}

Animal::~Animal()
{
	std::cout<<GREEN<<"Animal destructor called"<<RESET<<std::endl;
}

void Animal::makeSound(void) const
{
	std::cout<<_type<<": Some sound"<<std::endl;
}

std::string Animal::getType(void) const
{
	return (_type);
}

Animal &Animal::operator=(Animal const &a)
{
	this->_type = a.getType();
	return (*this);
}

Animal::Animal(Animal const &a)
{
	*this = a;
	std::cout<<"Animal copy constructor"<<std::endl;
}
