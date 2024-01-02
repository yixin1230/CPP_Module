/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 16:17:36 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/02 17:06:20 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout<<BLUE<<_type<<" constructor "<<RESET<<std::endl;
}

Cat::~Cat()
{
	std::cout<<BLUE<<_type<<" detructor "<<RESET<<std::endl;
}

void Cat::makeSound(void)const
{
	std::cout<<_type<<": meow meow ~"<<std::endl;
	
}
