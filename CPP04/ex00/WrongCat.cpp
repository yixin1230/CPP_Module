/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/03 21:43:10 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 09:43:47 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout<<RED<<_type<<" constructor called"<<RESET<<std::endl;
}

WrongCat::~WrongCat()
{
	std::cout<<RED<<_type<<" detructor called"<<RESET<<std::endl;
}

void WrongCat::makeSound(void)
{
	std::cout<<_type<<": I'm wrong cat, wrong wrong!"<<std::endl;
}
