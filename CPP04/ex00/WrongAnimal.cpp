/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/03 21:43:15 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 09:54:45 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout<<RED<<"WrongAnimal constructor called"<<RESET<<std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<RED<<"WrongAnimal destructor called"<<RESET<<std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout<<_type<<": Wrong Wrong Wrong"<<std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &a)
{
	std::cout<<"WrongAnimal assigment operator called"<<std::endl;
	this->_type = a.getType();
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const &a)
{
	*this = a;
	std::cout<<"WrongAnimal copy constructor called"<<std::endl;
}
