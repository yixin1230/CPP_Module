/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 11:02:08 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 10:38:04 by yizhang       ########   odam.nl         */
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
		void	setname(std::string name);
		Zombie(void);
		~Zombie(void);
	private:
		std::string _name;
};
Zombie *zombieHorde(int N, std::string name);

#endif