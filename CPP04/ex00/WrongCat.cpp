/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/03 21:43:10 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 09:15:53 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "Cat";
	std::cout<<BLUE<<_type<<" constructor "<<RESET<<std::endl;
}

WrongCat::~WrongCat()
{
	std::cout<<BLUE<<_type<<" detructor "<<RESET<<std::endl;
}

void WrongCat::makeSound(void)
{
	std::cout<<_type<<": I'm wrong cat, wrong wrong!"<<std::endl;
	
}
