/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 19:50:19 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 17:18:11 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain constructor called"<<std::endl;
}

Brain::Brain(Brain const &a)
{
	std::cout<<"Brain copy constructor"<<std::endl;
	*this = a;
}

Brain::~Brain()
{
	std::cout<<"Brain destructor called"<<std::endl;
}

Brain &Brain::operator=(Brain const &a)
{
	for(int i = 0; i < 100; i++)
	{
		_ideas[i] = a._ideas[i];
	}
	std::cout<<"Brain copy assigment operator called"<<std::endl;
	return (*this);
}

void Brain::setIdeas(std::string const &idea, int i)
{
	_ideas[i] = idea;
}

std::string Brain::getIdeas(unsigned int i)
{
	return (_ideas[i]);
}

