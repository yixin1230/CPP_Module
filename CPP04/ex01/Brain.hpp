/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 19:50:29 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 16:18:52 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const &a);
		~Brain();
		Brain &operator=(Brain const &a);

		
		void setIdeas(std::string const &idea, int i);
		std::string getIdeas(unsigned int i);
		
	protected:
		std::string	_ideas[100];
};

#endif