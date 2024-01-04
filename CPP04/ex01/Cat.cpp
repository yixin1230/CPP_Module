/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 16:17:36 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 10:13:08 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout<<BLUE<<_type<<" constructor called"<<RESET<<std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout<<BLUE<<_type<<" detructor called"<<RESET<<std::endl;
}

void Cat::makeSound(void)const
{
	std::cout<<_type<<": meow meow ~"<<std::endl;
}

Cat &Cat::operator=(Cat const &a)
{
	_type = a._type;
	_brain = a._brain;
	std::cout<<"Cat copy assigment operator called"<<std::endl;
	return (*this);
}
