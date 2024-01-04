/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 19:50:29 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 10:26:06 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain operator=(Brain const &a);
		void setIdeas(std::string idea);
		void getIdeas(int i);
	protected:
		std::string ideas[100];
		int	index;
};

#endif