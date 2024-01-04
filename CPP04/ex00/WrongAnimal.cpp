/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/03 21:43:15 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 09:12:57 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "TYPE";
	std::cout<<GREEN<<"Animal constructor called"<<RESET<<std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<GREEN<<"Animal destructor called"<<RESET<<std::endl;
}

void WrongAnimal::makeSound(void)
{
	std::cout<<"Wrong Wrong Wrong"<<std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &a)
{
	this->_type = a.getType();
	return (*this);
}