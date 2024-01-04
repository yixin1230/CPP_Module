/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 19:50:19 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 10:26:33 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain constructor called"<<std::endl;
}

Brain::~Brain()
{
	std::cout<<"Brain destructor called"<<std::endl;
}

Brain Brain::operator=(Brain const &a)
{
	*this = a;
	std::cout<<"Brain copy assigment operator called"<<std::endl;
	return (*this);
}

void Brain::setIdeas(std::string idea)
{
	
}

void Brain::getIdeas(int i)
{
	
}

