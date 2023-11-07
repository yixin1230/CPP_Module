/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/07 17:31:50 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/07 17:38:42 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	public:
	void	announce(void);
	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);
	private:
	std::string	name;
    
};

#endif