/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 11:02:08 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/08 11:13:31 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	public:
		void	announce(void);
		Zombie(std::string name);
		~Zombie(void);
	private:
		std::string _name;
};

	Zombie *zombieHorde(int N, std::string name);
#endif